#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	long int m,n,p,q;
	long int a[1000][10000][3];
	system("cls");
	cin>>m>>n>>p>>q;
	if (n==p){
		cout<<"\nEnter 1st Matrix :";
		for(int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				cin>>a[i][j][0];
			}
		}
		cout<<"\nEnter 2nd Matrix :";
		for(int i=0;i<p;i++){
			for (int j=0;j<q;j++){
				cin>>a[i][j][1];
			}
		}	
		for (int i=0;i<m;i++){
			for (int j=0;j<q;j++){
				a[i][j][2]=0;
				for (int c=0;c<n;c++){
					a[i][j][2]+=(a[i][c][0]*a[c][j][1]);
				}
			}
		}
			cout<<"\n\n 1st Matrix :\n";
		for(int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				cout<<a[i][j][0]<<"\t";
			}cout<<"\n";
		}
		
			cout<<"\n\n 2nd Matrix :\n";
		for(int i=0;i<p;i++){
			for (int j=0;j<q;j++){
				cout<<a[i][j][1]<<"\t";
			}cout<<"\n";
		}
		cout<<"\n\n 3rd Matrix :\n";
		for(int i=0;i<p;i++){
			for (int j=0;j<q;j++){
				cout<<a[i][j][2]<<"\t";
			}cout<<"\n";
		}
	}
	getch();
	return 0;
}
