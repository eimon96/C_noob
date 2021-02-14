#include <stdio.h>
#include <stdlib.h>

int main()
{
  char x,*px;
  double *pz,z[5]={15.8,32,-119.5,8,5};
  float v[3]={111,222,444},*pv;
  
  
  /* pointer to double */
  pz=z;
  printf( "\n\n\taddr(z)=%d  addr(pz)=%d  pz=%d  z=%d  address(z[0])=%d\n\n",&z,&pz,pz,z,&z[0] );
  printf( "\n\n\taddress(z[1])=%d address(z[2])=%d\n\n",&z[1],&z[2] );

  pz=pz+2;
  printf( "\n\n\tpz=%d   *pz=%f  z[2]=%f\n\n",pz,*pz,z[2] );
  
  /* pointer to char */
  x='A';
  px=&x;
  printf( "\n\n\taddr(x)=%d  px=%d   *px=%c  x=%c\n\n",&x,px,*px,x );
  
  /* pointer to float */
  pv=&v;
  printf( "\n\n\tpv=%d   *pv=%f  v[0]=%f\n\n",pv,*pv,v[0] );
  pv=pv+2;
  printf( "\n\n\tpv=%d   *pv=%f  v[2]=%f\n\n",pv,*pv,v[2] );
  *pv=777;
  printf( "\n\n\t*pv=%f  v[2]=%f\n\n",*pv,v[2] );
  
  return 0;
}

