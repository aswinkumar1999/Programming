#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 536870912
int rnd[N];
int main()
{
long double m = pow(2,29), c=12345,a=1103515245;
long double seed,sum,square,mean,stdv,n,num;
//int *rnd;
//rnd = malloc((unsigned long int)m*sizeof(int));
for(unsigned long int i=0;i<m;++i)
rnd[i]=0;
char check = 'y';
//printf("Enter the number of random number to be generated\n");
//scanf("%Lf",&num);
num = 536870912;
while(check == 'y')
{
 //printf("Enter the seed value\n");
 //scanf("%Lf",&seed);
 seed=5;
 n=seed;
 sum=seed;
 square=seed*seed;
 for(unsigned long int i=0;i<num;++i)
 {
  n=fmod(((n*a)+c),m);
  sum=sum+n;
  square=square+(n*n);
  rnd[(unsigned long int)n]++;
 }
 printf("\n");
 mean=sum/num;
 stdv=sqrt((square/num)-(mean*mean));
//Histrogram
 long double count =0,j=0;
 for(long int i=0;i<m;++i)
 {
  count+=rnd[i];
  j++;
  if(j==pow(2,24))
  {
    j=0;
    printf("|");
    count/=pow(2,19);
    for(int k=0;k<count;++k)
    printf("*");
    printf("\n");
    count=0;
  }
 }
 //printf("For the seed value %Lf\nThe mean value is %Lf\nThe standard deviation is %Lf\n",seed,mean,stdv);
 //printf("Do you want to continue? (Enter 'y' for yes and 'n' for no)\n");
 //scanf(" %c",&check);
 //printf("\n");
 check='n';
}
return(0);
}

/*

Q1)

(b)
The value of m should be 2 for generating random bits of 0 and 1.
This is because the remainder when any number is divided by 2 would be 0 or 1 only.

(c)

Disadvantages of using this random number generator :
-> This random number generator generates only a set of m values (all of which may not be distinct) which keeps on repeating for every m
   numbers generated
-> The extent of randomness depends solely on the seed value given, for some values of the seed the generator may produce the same number
   repeatedly also !!!

Effect of decrease in value of m :
-> The range in which the generated random numbers lie decreases
-> The standard deviation also decreases with m

*/
