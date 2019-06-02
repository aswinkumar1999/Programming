#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	system("cls");
	int z;
	cin>>z;
	system("cls");
 char a='*';
 char b=' ';
 for (int i=1;i<=z;i++){
 	cout<<"\n";
 	for(int j=1;j<=40-z-i;j++){
 		cout<<b;
	 }
	 for(int k=1;k<=i;k++){
	 	cout<<a<<b;
	 }
	 for (int l=1;l<=(2*(z-i));l++){
	 	cout<<b;
	 }
	 for(int m=1;m<=i;m++){
	 	cout<<a<<b;
 }
}
for (int o=(z*2)+1;o>=1;o--){
cout<<"\n";
for (int n=1;n<40-(o-1);n++){
	cout<<b;
}    	
for (int p=1;p<=o;p++){
	cout<<a<<b;
}
}
cout<<"\n";
 
	getch();
}
