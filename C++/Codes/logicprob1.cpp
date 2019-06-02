#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;
int a,r,c,n,s,i;
int main(void)
{
	
	loop:
	cin>>a;
	if(a!=0)
	{
	s=r=c=n=0;
	for(i=0;;i++)
		if(a<=i*i)
		{
			n=i;
			break;
		}
	for(i=0;i<n;i++)
		s+=2*i;            //diagonal elements non-leading
	s++;
	if((n%2!=0&&a>s)||(n%2==0&&a<s))
	{
		c=n;
		r=(n*n-s)-(abs(s-a))+1;
	}
	else if(a==s)
		r=c=n;
	else
	{
		r=n;
		c=(n*n-s)-(abs(s-a))+1;
	}
	cout<<"   "<<r<<' '<<c<<endl;
	goto loop;
	}
	getch();
}
