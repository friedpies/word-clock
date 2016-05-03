boolean d_savings = 1;

int brightness = 4095;

#include <Wire.h>
#include "RTClib.h"
#include <Adafruit_CC3000.h>
#include <ccspi.h>
#include <SPI.h>
#include "Adafruit_TLC5947.h"


#define ADAFRUIT_CC3000_IRQ   3  
#define ADAFRUIT_CC3000_VBAT  5
#define ADAFRUIT_CC3000_CS    10
// Use hardware SPI for the remaining pins
// On an UNO, SCK = 13, MISO = 12, and MOSI = 11
Adafruit_CC3000 cc3000 = Adafruit_CC3000(ADAFRUIT_CC3000_CS, ADAFRUIT_CC3000_IRQ, ADAFRUIT_CC3000_VBAT,
SPI_CLOCK_DIVIDER); // you can change this clock speed but DI

#define WLAN_SSID       "kjm_tp"        // cannot be longer than 32 characters!
#define WLAN_PASS       "7035016291"
// Security can be WLAN_SEC_UNSEC, WLAN_SEC_WEP, WLAN_SEC_WPA or WLAN_SEC_WPA2
#define WLAN_SECURITY   WLAN_SEC_WPA2

Adafruit_CC3000_Client client; //LED Module
#define NUM_TLC5974 1
#define data   4
#define clock   7
#define latch  6 
#define oe  -1  // set to -1 to not use the enable pin (its optional)

Adafruit_TLC5947 tlc = Adafruit_TLC5947(NUM_TLC5974, clock, data, latch);

#define IT 0
#define IS 1
#define AM 2
#define PM 3
#define A_QUARTER 4
#define TWENTY 5
#define FIVE 6
#define HALF 7
#define TEN1 8
#define TO 9
#define PAST 10
#define NINE 11
#define ONE 12
#define SIX 13
#define THREE 14
#define FOUR 15
#define FIVE2 16
#define TWO 17
#define EIGHT 18
#define ELEVEN 19
#define SEVEN 20
#define TWELVE 21
#define TEN2 22
#define OCLOCK 23

const unsigned long
connectTimeout  = 15L * 1000L, // Max time to wait for server connection
responseTimeout = 15L * 1000L; // Max time to wait for data from server
int
countdown       = 0;  // loop() iterations until next time server query
unsigned long
lastPolledTime  = 0L, // Last value retrieved from time server
sketchTime      = 0L; // CPU milliseconds since last server query

DateTime now1;

void setup(void){
  Serial.begin(115200);
  tlc.begin();
  if (oe >= 0) {
    pinMode(oe, OUTPUT);
    digitalWrite(oe, LOW);
  }

  displayDriverMode();

  Serial.println(F("\nInitialising the CC3000 ..."));
  if (!cc3000.begin()) {
    Serial.println(F("Unable to initialise the CC3000! Check your wiring?"));
    for(;;);
  }

  uint16_t firmware = checkFirmwareVersion();
  if (firmware < 0x113) {
    Serial.println(F("Wrong firmware version!"));
    for(;;);
  } 

  displayMACAddress();

  Serial.println(F("\nDeleting old connection profiles"));
  if (!cc3000.deleteProfiles()) {
    Serial.println(F("Failed!"));
    while(1);
  }

  /* Attempt to connect to an access point */
  char *ssid = WLAN_SSID;             /* Max 32 chars */
  Serial.print(F("\nAttempting to connect to ")); 
  Serial.println(ssid);

  /* NOTE: Secure connections are not available in 'Tiny' mode! */
  if (!cc3000.connectToAP(WLAN_SSID, WLAN_PASS, WLAN_SECURITY)) {
    Serial.println(F("Failed!"));
    while(1);
  }

  Serial.println(F("Connected!"));
  /* Wait for DHCP to complete */
  Serial.println(F("Request DHCP"));
  while (!cc3000.checkDHCP()) {
    delay(100); // ToDo: Insert a DHCP timeout!
  }

  /* Display the IP address DNS, Gateway, etc. */
  while (!displayConnectionDetails()) {
    delay(1000);
  }
}


// To reduce load on NTP servers, time is polled once per roughly 24 hour period.
// Otherwise use millis() to estimate time since last query.  Plenty accurate.
void loop(void) {

  if(countdown == 0) {            // Time's up?
    unsigned long t  = getTime(); // Query time server
    if(t) {                       // Success?
      lastPolledTime = t;         // Save time
      sketchTime     = millis();  // Save sketch time of last valid time query
      countdown      = 24*60*4-1; // Reset counter: 24 hours * 15-second intervals
    }
  } 
  else {
    countdown--;                  // Don't poll; use math to figure current time
  }

  unsigned long currentTime = lastPolledTime + (millis() - sketchTime) / 1000;

  //Serial.print(F("Current UNIX time: "));
  //Serial.print(currentTime);
  //Serial.println(F(" (seconds since 1/1/1970 UTC)"));
  now1 = currentTime-(6-d_savings)*60*60;
  int currentHour = now1.hour();
  int currentMinute = now1.minute();
  Serial.print(currentHour); 
  Serial.print(":");
  Serial.println(currentMinute);
  tlc.setPWM(0,4095);
  tlc.setPWM(1,4095);
  setHour(currentHour, currentMinute, brightness);
  setMinute(currentMinute, brightness);
  tlc.write();
  delay(15000L); // Pause 15 seconds
}





