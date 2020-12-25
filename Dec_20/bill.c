#include <stdio.h>
#include <stdlib.h>
#define PX 29.64
#define TIMH_1 0.06817
#define TIMH_2 0.08687
#define TIMH_3 0.10662
#define TIMH_4 0.14127
#define SYNT_FPA 0.08
#define TAPE 1.77
#define SYNT_ERT 13.10
#define DT 49.47
#define DF 6.18
#define TAP 6.80
int main()
{
  int kw;
  float tk,ps,er,enert,pp,lir,tert,lt,sl;
  printf("\nMeasurement (in kilowatthours)= ");	scanf("%d",&kw);
  
printf("\nPS (in euros)= ");		scanf("%f",&ps);
  printf("\nER (in euros)= ");		scanf("%f",&er);
  printf("\nENERT (in euros)= ");	scanf("%f",&enert);
  if (kw<=820) tk=kw*TIMH_1;
  else if (kw<=1640) tk=820*TIMH_1+(kw-820)*TIMH_2;
  else if (kw<=2050) tk=820*(TIMH_1+TIMH_2)+(kw-1640)*TIMH_3;
  else tk=820*(TIMH_1+TIMH_2)+410*TIMH_3+(kw-2050)*TIMH_4;
  tk=tk+PX;
  lir=tk-ps-er+TAPE;
  tert=SYNT_ERT-enert;
  lt=tert+DT+DF+TAP;
  sl=(1+SYNT_FPA)*lir+lt;
  
  printf("\n\n\tBefore: SL= %f\n\n\n",sl);
  
  
  if ((sl-(int)sl)>=0.5) sl=(int)sl+1.0;
  else sl=(int)sl;
  printf("\n\n\tSL= %f\n\n\n",sl);
  system("pause");

  return 0;
}
