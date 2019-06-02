#include<iostream>
using namespace std;
int main(){
	int a,b=1;
	cout<<"Enter the value";
	cin>>a;
	if (a>1) {
		b = b*a ;
		a--;
		
	}
	if (a==1){
	
	cout<<b;
}
return 0;	
}
