#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
int a[3][3],n=3,i,j,win=0;
int cut(int p)
{
	int g=0,k=(p==1)? 2 : 1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if((i<(n-1)&&((j>0&&a[i-1][j-1]==k)||(j<(n-1)&&a[i-1][j+1]==k)))||(i>0&&((j>0&&a[i-1][j-1]==k)||(j<(n-1)&&a[i-1][j+1]==k))))
				g=1;
		}
	return g;
}
int check(int p)
{
	win=p;
	/*int aa[]={0,0,0};
	if(p!=0)
	{
		for(j=0;j<n;j++)
			for(i=0;i<n-1;i++)
				if(a[i][j]==1&&a[i+1][j+1]==2)
					aa[j]=1;
		for(i=0;i<n-1;i++)
			if(aa[i]==aa[i+1])
				aa[0]=3;
		if(aa[0]==3)
		{
			cout<<"\n\n\t\t\tmatch draw\n";
				exit(0);
		}
	} */
	if(p==1)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]==2)
					win=0;
		for(j=0;j<n;j++)
		      if(a[n-1][j]==1)
			win=1;
	}
	else
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]==1)
					win=0;
		for(j=0;j<n;j++)
		      if(a[0][j]==2)
			win=2;
	}
	if(win!=0)
	{
		cout<<"\n\t\t\tplayer "<<p<<" has won!!!";
		exit(0);
	}
	return win;
}
void move(int p)
{
	if(p==1)
	{
		if(cut(1)==0)
		{
			loop1:
			cout<<"\ntype the position of peice after moving : ";
			cin>>i>>j;
			i--;
			j--;
			if(a[i][j]==0)
			{
				a[i][j]=1;
				a[i-1][j]=0;
			}
			else
				goto loop1;
		}
		else
		{
			loop:
			cout<<"\ntype the position of peice u want to cut or position of your piece after u move : ";
			cin>>i>>j;
			i--;
			j--;
			if(a[i][j]==0)
			{
				a[i][j]=1;
				a[i-1][j]=0;
			}
			else if(a[i][j]==2)
			{
				a[i][j]=1;
				cout<<"\nenter the position of ur piece before moving : ";
				cin>>i>>j;
				i--;
				j--;
				a[i][j]=0;
			}
			else
				goto loop;
		}
	}
	else
	{
		if(cut(2)==0)
		{
			loop2:
			cout<<"\ntype the position of peice after moving : ";
			cin>>i>>j;
			i--;
			j--;
			if(a[i][j]==0)
			{
				a[i][j]=2;
				a[i+1][j]=0;
			}
			else
				goto loop2;
		}
		else
		{
			loop3:
			cout<<"\ntype the position of peice u want to cut or position of your piece after u move : ";
			cin>>i>>j;
			i--;
			j--;
			if(a[i][j]==0)
			{
				a[i][j]=2;
				a[i+1][j]=0;
			}
			else if(a[i][j]==1)
			{
				a[i][j]=2;
				cout<<"\nenter the position of ur piece before moving : ";
				cin>>i>>j;
				i--;
				j--;
				a[i][j]=0;
			}
			else
				goto loop3;
		}
	}
}
void show()
{
	for(i=0;i<=n;i++)
			cout<<i<<'\t';
		cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
			if(j==0)
				cout<<i+1<<'\t';
			else if(a[i][j-1]==1)
				cout<<"p\t";
			else if(a[i][j-1]==2)
				cout<<"P\t";
			else
			cout<<" \t";
		cout<<endl;
	}
}
int main()
{
	system("cls");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=(i==0)? 1 : (i==n-1)? 2 : 0;
	cout<<"\nplayer 1 : p\nplayer 2 : P\n";
	show();
	for(;win==0;)
	{
		cout<<"\nplayer 1";
		move(1);
		win=check(1);
		show();
		cout<<"\nplayer 2";
		move(2);
		check(2);
		show();
	}
	getch();
	
}
