#include <stdio.h>
#include <math.h>

float get_average(float newdata);   // δήλωση συνάρτησης
int main()
{
  float data=1.0;
  float average;
  while (data!=0)
  {
    printf( "\n\tGive a number or press 0 to finish: " );
    scanf( "%f",&data );
    average=get_average(data);
    if (fabs(data)>0.000001) printf( "\tThe new average is %.3f\n",average );
    else printf( "\tThe final average is %.3f\n",average );
  }
  return 0;
}   // τέλος της main, συνέχεια στην επόμενη διαφάνεια


float get_average(float newdata)
{
  static float total=0.0;
  static int count=0;
  if (fabs(newdata)>0.000001) count++;
  total=total+newdata;
  return(total/count);
}  //end of get_average

