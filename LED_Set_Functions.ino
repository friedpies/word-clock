
void setHour(int Hour, int Minute, int Brightness){
  if (Hour > 12){
    Hour = Hour-12;
  }
  if (Hour==12){
    Hour =0;
  }


  if (Hour==0 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, Brightness); 
  }
  if (Hour==0 && Minute>35){
    tlc.setPWM(ONE, Brightness); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==1 && Minute <35){
    tlc.setPWM(ONE, Brightness); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==1 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, Brightness); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==2 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, Brightness); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==2 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, Brightness); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==3 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, Brightness); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==3 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, Brightness); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==4 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, Brightness); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==4 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, Brightness); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==5 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, Brightness); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==5 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, Brightness); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==6 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, Brightness); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==6 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, Brightness); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==7 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, Brightness); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==7 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, Brightness); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==8 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, Brightness); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==8 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, Brightness); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==9 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, Brightness); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==9 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, Brightness); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }

  if (Hour==10 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, Brightness); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==10 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, Brightness); 
    tlc.setPWM(TWELVE, 0); 
  }
  
    if (Hour==11 && Minute <35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, Brightness); 
    tlc.setPWM(TWELVE, 0); 
  }
  if (Hour==11 && Minute>35){
    tlc.setPWM(ONE, 0); 
    tlc.setPWM(TWO, 0); 
    tlc.setPWM(THREE, 0); 
    tlc.setPWM(FOUR, 0); 
    tlc.setPWM(FIVE2, 0); 
    tlc.setPWM(SIX, 0); 
    tlc.setPWM(SEVEN, 0); 
    tlc.setPWM(EIGHT, 0); 
    tlc.setPWM(NINE, 0); 
    tlc.setPWM(TEN2, 0); 
    tlc.setPWM(ELEVEN, 0); 
    tlc.setPWM(TWELVE, Brightness); 
  }


}

void setMinute(int Minute, int Brightness){
  if (Minute >=0 && Minute< 5){  
    tlc.setPWM(OCLOCK, Brightness);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, 0);
  }
  if (Minute >=5 && Minute< 10){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, Brightness);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=10 && Minute<15){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, Brightness);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=15 && Minute<20){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, Brightness);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=20 && Minute<25){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, Brightness);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=25 && Minute<30){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, Brightness);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, Brightness);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=30 && Minute<35){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, Brightness);
    tlc.setPWM(TO, 0);
    tlc.setPWM(PAST, Brightness);
  }
  if (Minute >=35 && Minute<40){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, Brightness);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, Brightness);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, Brightness);
    tlc.setPWM(PAST, 0);
  }
  if (Minute >=40 && Minute<45){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, Brightness);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, Brightness);
    tlc.setPWM(PAST, 0);
  }
  if (Minute >=45 && Minute<50){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, Brightness);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, Brightness);
    tlc.setPWM(PAST, 0);
  }
  if (Minute >=50 && Minute<55){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, 0);
    tlc.setPWM(TEN1, Brightness);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, Brightness);
    tlc.setPWM(PAST, 0);
  }
  if (Minute >=55 && Minute<60){
    tlc.setPWM(OCLOCK, 0);
    tlc.setPWM(FIVE, Brightness);
    tlc.setPWM(TEN1, 0);
    tlc.setPWM(A_QUARTER, 0);
    tlc.setPWM(TWENTY, 0);
    tlc.setPWM(HALF, 0);
    tlc.setPWM(TO, Brightness);
    tlc.setPWM(PAST, 0);
  }

}






