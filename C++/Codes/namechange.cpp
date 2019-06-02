#include<bits/stdc++.h>
using namespace std;

int main(){
	char list[30][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>list[i];
	}
	int spaces=0,j,l;
	//Checking number of spaces
	for(int i=0;i<n;i++){
		spaces=0;
		for( j=0;list[i][j]!='\0';j++){
			if(list[i][j]==' '){
				spaces++;
				cout<<spaces<<"\n";
			}
		}
		if(spaces==0){
				if(list[i][0]>=65&&list[i][0]<=90){
					cout<<list[i][0];
				}
				else
					list[i][0]-=32;
					cout<<list[i][0];
			for(int k=1;k<j;k++){
				if(list[i][k]>=65&&list[i][k]<=90){
					list[i][k]+=32;
					cout<<list[i][k];
				}
				else
					cout<<list[i][k];
			}
			cout<<"\n";
		}
		else //if(spaces==1){
			if(list[i][0]>=65&&list[i][0]<=90){
				cout<<list[i][0]<<". ";
			}
			else
				list[i][0]-=32;
				cout<<list[i][0]<<". ";
			for( l=1;list[i][l]!=' ';l++){
			}
			for(int k=l+1;k<j;k++){
				if(list[i][k]>=65&&list[i][k]<=90){
					list[i][k]-=32;
					cout<<list[i][k];
				}
				else
					cout<<list[i][k];
			}
				
		//	}
		}
	
	
	
	return 0;
}
