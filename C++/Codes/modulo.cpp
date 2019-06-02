#include<iostream>
#include<conio.h>
using namespace std;
long double modulo(long double a ,long double b){	
for(;a>=b;){
		a-=b;
	}
	return a;		
}
int main(){
	system("cls");
	long double a ,b;
	cin>>a>>b;
	cout<<modulo(a,b);	
	getch();
	return 0;
}
