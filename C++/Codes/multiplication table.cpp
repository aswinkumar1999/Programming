#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int z;
	cin>>z;
	system("cls");
	int a[z];
	for (int i=0;i<z;i++){
		a[i]=i+1;		
	}
	for (int j=0;j<z;j++){
		if (z<10){
			cout<<"\n\n";
		}
		else if (z>=10){
		
		cout<<"\n";
	}
		for (int k=0;k<z;k++){
			cout<<a[j]*a[k]<<"\t";
		}
	}
	
	getch();
}
