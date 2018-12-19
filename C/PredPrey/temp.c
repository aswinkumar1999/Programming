#include<stdio.h>
#include<stdlib.h>
double x,y,a,b,c,d,dt,t=0;
FILE *ptr,*ptr1,*ptr2;

void predprey()
{
 double temp = x;
 x = (a*x - b*x*y)*dt + x;
 y = (-c*y + d*temp*y)*dt + y;
}

int main()
{
 x=0.3;
 y=0.3;
 a=0.7;
 b=1.7;
 c=d=1;
 dt = 0.0001;
 ptr = fopen("predpreymap1.dat","w");
 ptr1 = fopen("xvt.dat","w");
 ptr2 = fopen("yvt.dat","w");
 for(double l=0;l<1000000;++l)
 {
  predprey();
 t=t+dt;
 fprintf(ptr,"%lf %lf\n",x,y);
 fprintf(ptr1,"%lf %lf\n",t,x);
 fprintf(ptr2,"%lf %lf\n",t,y);
 }
 fclose(ptr1);
 fclose(ptr2);
 fclose(ptr);
 return(0);
}
