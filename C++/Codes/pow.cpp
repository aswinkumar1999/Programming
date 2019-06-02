#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(void){
	long long int a,b,c;
	cout<<"Enter the base number : ";
	cin>>a;
	cout<<"Enter the power : ";
	cin>>b;
	c = pow(a,b);
	cout<<c;
	getch();
}
