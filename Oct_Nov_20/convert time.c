/* Convert a number of seconds to various hours-minutes-seconds formats */

#include <stdio.h>
#include <stdlib.h>

int main( )
{
  int timeSecs,hrs,mnt,scs;
  
  printf("\tTime in seconds:  ");
  scanf("%d",&timeSecs);
      
  hrs=timeSecs/3600;
  mnt=(timeSecs%3600)/60;
  scs=(timeSecs%3600)%60;
  
  /* format 1: xx hours, xx', xx'' */
  printf("\n\n\tFormat 1:");
  if (hrs==1)  printf("\n\t%d seconds = %d hour, %d', %d'' ",timeSecs,hrs,mnt,scs);
  else  printf("\n\t%d seconds = %d hours, %d', %d'' ",timeSecs,hrs,mnt,scs);
  
  /* format 2: xx:xx:xx */
  printf("\n\n\tFormat 2:");
  printf("\n\t%d seconds = %d:%d:%d",timeSecs,hrs,mnt,scs);
  
  /* format 3: xx hours, xx minutes, xx seconds */
  printf("\n\n\tFormat 3:");
  if (hrs==1)
  {
  	if (mnt==1)
  	{
  		if (scs==1)
		{
		    printf("\n\t%d seconds = %d hour, %d minute, %d second",timeSecs,hrs,mnt,scs);
	    }
  		else
		{
		 printf("\n\t%d seconds = %d hour, %d minute, %d seconds",timeSecs,hrs,mnt,scs);
	    }
  	}
  	else
  	{
  		if (scs==1)
		{
		    printf("\n\t%d seconds = %d hour, %d minutes, %d second",timeSecs,hrs,mnt,scs);
	    }
  		else
		{
		 printf("\n\t%d seconds = %d hour, %d minutes, %d seconds",timeSecs,hrs,mnt,scs);
	    }  		
  	}
  }
  else
  {
  	if (mnt==1)
  	{
  		if (scs==1) {
		  printf("\n\t%d seconds = %d hours, %d minute, %d second",timeSecs,hrs,mnt,scs);  }
  		else {
		  printf("\n\t%d seconds = %d hours, %d minute, %d seconds",timeSecs,hrs,mnt,scs); }
  	}
  	else
  	{
  		if (scs==1)  {
		  printf("\n\t%d seconds = %d hours, %d minutes, %d second",timeSecs,hrs,mnt,scs);  }
  		else {
		  printf("\n\t%d seconds = %d hours, %d minutes, %d seconds",timeSecs,hrs,mnt,scs); }  		
  	}
  }
  
  printf("\n\n\n");
  return 0;
}
