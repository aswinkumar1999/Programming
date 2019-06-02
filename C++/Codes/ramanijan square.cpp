#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	
	int a,b,c,d,sq[4][4],i,j;
	cin>>a>>b>>c>>d;
	sq[0][0]=a;
	sq[0][1]=b;
	sq[0][2]=c;
	sq[0][3]=d;
	sq[1][0]=d+1;
	sq[1][1]=c-1;
	sq[1][2]=b-3;
	sq[1][3]=a+3;
	sq[2][0]=b-2;
	sq[2][1]=a+2;
	sq[2][2]=d+2;
	sq[2][3]=c-2;
	sq[3][0]=c+1;
	sq[3][1]=d-1;
	sq[3][2]=a+1;
	sq[3][3]=b-1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<sq[i][j]<<"  ";
		cout<<endl;
	}
	getch();
}
