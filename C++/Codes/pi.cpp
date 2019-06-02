#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(void){
	long double i=0,e;
	unsigned long long int n,a=0;
	cin>>n;
	for (;a<=n;a++){
    i=i+((pow(-1,a))/((2*a)+1));	
	}
    e=i*4;
	cout<<"\n"<<setprecision(200)<<e;
	getch();
}
