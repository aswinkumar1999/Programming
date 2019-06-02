#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	system("cls");
	int a[100][100],d,i,j,k=0,n,t,e,g,f;
	cout<<"Enter any number (greater than 2) ";
	cin>>n;
	if (n%4==0)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=++k;
		for (i=0;i<n;i++)
			for(j=0;j<n;j++)
				if((i<(n/4)&&j<n/4)||(i<(n/4)&&j>(3*n/4)-1))
				{
					t=a[i][j];
					a[i][j]=a[n-i-1][n-j-1];
					a[n-i-1][n-j-1]=t;
				}
	}
	else if(n%2==0)
	{
		for(i=0,j=n/4;k<=(n*n)/4;i--,j++)
		{       a[i][j]=++k;
			if(k%(n/2)==0)
				{i+=2;j--;}
			if(i==0)
				i=n/2;
			if(j==n/2-1)
				j=-1;
		}
		for(d=1;d<4;d++)
		{
			if(d==1)
				{g=f=n/2;e=(n*n)/4;}
			if(d==2)
				{g=0;f=n/2;e+=e;}
			if(d==3)
				{g=n/2;f=0;e+=(e/2);}
			for(i=0;i<n/2;i++)
				for(j=0;j<n/2;j++)
					a[i+g][j+f]=a[i][j]+e;
		}
		for(i=0;i<n/2;i++)
			for(j=0;j<=n/4;j++)
				if (i==n/4)
				{
					t=a[i][j+1];
					a[i][j+1]=a[n/2+i][j+1];
					a[i+n/2][j+1]=t;
				}
				else
				{
					t=a[i][j];
					a[i][j]=a[n/2+i][j];
					a[i+n/2][j]=t;
				}
	}
	else
	{
		for(i=0,j=n/2;k<=(n*n);i--,j++)
		{       a[i][j]=++k;
		if(k%n==0)
		{i+=2;j--;}
		if(i==0)
			i=n;
		if(j==n-1)
			j=-1;}
	}
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			cout<<a[i][j]<<'\t';
		cout<<endl;}
	getch();
}

