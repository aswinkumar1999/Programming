#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
 int main(){
 char a ;
 char b = ' ';
 cout<<"Enter a character u like to use in the pattern (Like *,#,A,b,1 etc....) :";cin>>a;
 int d; cout<<"Keep the windows in full screen.(You can slide it to either side of the monitor to get fullscreen )\nEnter a value from 0-39 : ";cin>>d; if(d<=39){ 
 system("cls");
 int o;
 o = (81-(2*d))/2;
 for (int t = 1; t<= o  ; t++)
 {cout<<"\n";
 }
 for (int c=1 ; c<=d; c++){
 	 for (int x=39 ; x>=c ; x--)	{
 cout<<b;	}
 for (int e= 1; e<=c ; e++){
 	cout<<a<<b; }
 cout<<"\n";}
 for (int k=1 ; k<=d; k++){
 	for (int z=1; z<=40-d+k ; z++)	{
 	cout<<b; }
 for (int g=1; g<=d-k ; g++){
 	cout<<a<<b; } cout<<"\n"; } }
 else if (d>39){
 cout<<"Sorry improper value";}
 getch();
 return 0;
 }
