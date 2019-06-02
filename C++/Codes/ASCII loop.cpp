#include<iostream>
#include<fstream>
using namespace std;
int main(void){
	ofstream myfile;
  myfile.open ("Password database.txt");
for (int a=0 ; a<=126 ; a++) {
char ch = a;
if (a==0){
	a=a+33;}
for (int b=0 ; b<=126 ; b++) {
char ch2 = b;
if (b==0){
	b=b+33;}
for (int c=33 ; c<=126 ; c++) {
char ch3 = c;
for (int d=33 ; d<=126 ; d++) {
char ch4 = d;
for (int e=33 ; e<=126 ; e++) {
char ch5 = e;
for (int f=33 ; f<=126 ; f++) {
char ch6 = f;
for (int g=33 ; g<=126 ; g++) {
char ch7 = g;
for (int h=33 ; h<=126 ; h++) {
char ch8 = h;
for (int i=33 ; i<=126 ; i++) {
char ch9 = i;
for (int j=33 ; j<=126 ; j++) {
char ch10 = j;
cout<<"\n"<<ch10<<ch9<<ch8<<ch7<<ch6<<ch5<<ch4<<ch3<<ch2<<ch;
myfile<<"\n"<<ch10<<ch9<<ch8<<ch7<<ch6<<ch5<<ch4<<ch3<<ch2<<ch;
}}}}}}}}}}
myfile.close();
}

