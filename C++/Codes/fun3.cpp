#include<iostream>
#include<stdlib.h>
using namespace std;
 int main(void){
 char a = '*';
 char b = ' ';
 int d; cout<<"Keep the windows in full screen.\nEnter a value from 0-39 : ";cin>>d; if(d<=39){ 
 system("cls");
 for (int c=1 ; c<=d; c++){
 	 for (int x=39 ; x>=c ; x--)	{
 cout<<b;	
}
 for (int e= 1; e<=c ; e++){
 	cout<<a<<b; }
 cout<<"\n";}
 for (int k=1 ; k<=d; k++){
 	for (int z=1; z<=40-d+k ; z++)	{
 	cout<<b;
 }
 for (int g=1; g<=d-k ; g++){
 	cout<<a<<b;
 } cout<<"\n";
 } }
 else if (d>39){
 cout<<"Sorry improper value";}
 }
