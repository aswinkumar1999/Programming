#include<iostream>
#include<conio.h>
using namespace std;

int main(void){
	float a,b,c,d,e,f,h;
	int i;
	cout<<"\nEnter input voltage :";
	cin>>a;
	cout<<"\nEnter average voltage consumed by LED :";
	cin>>b;
	cout<<"\nEnter average current consumed by LED (in milliamps):";
	cin>>c;
	c=c/1000;
	cout<<"\nEnter no. of LED's u have :";
	cin>>i;
	cout<<"\nEnter the maximum watts of the resistor :";
	cin>>h;
	d=a-b; 
	for (int g=1;g<=i;g++){
    e=(d/(c*g));
    f=(e*c*c*g*g);
    if (f<=h){
    	cout<<"\nNo.of led is : "<<g<<" Resistance to be used :"<<e;
	}
	}
	getch();
}
