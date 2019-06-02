//transpose
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[20][20],b[20][20],m,n;
	cout<<"\nEnter the rows and columns of matrice :";
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<b[i][j];
		}
	}
	return 0;
}
