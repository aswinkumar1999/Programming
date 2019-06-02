#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(void){
	int percent;
	ofstream myfile;
  myfile.open ("Password database 8 digit.txt");
for (int c=9 ; c>=0 ; c--) {
for (int d=9 ; d>=0 ; d--) {
	system("cls");	
cout<<"\n  "<<(100-(10*c+d))<<"%";	
for (int e=9 ; e>=0 ; e--) {
for (int f=9 ; f>=0 ; f--) {
for (int g=9 ; g>=0 ; g--) {
for (int h=9 ; h>=0 ; h--) {
for (int i=9 ; i>=0 ; i--) {
for (int j=9 ; j>=0 ; j--) {	
myfile<<"\n"<<c<<d<<e<<f<<g<<h<<i<<j;
}}}}}}}}
myfile.close();
}

