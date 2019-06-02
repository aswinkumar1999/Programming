#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
long double modulo(long double a ,long double b){	
for(;a>=b;){
		a-=b;
	}
	return a;		
}
int main(void) {
long double a,b,g,e;
cin>>a;
for (int c=1;c<=a;c++ ){
b=1;
e=(pow(2,c))-1;
g=(e/2)-1;
cout<<c<<"\t";
for (long double d=2;d<=g ;d++){
if (modulo(e,d)==0){b=0; d=g;break;
}
}
if (b==1){
cout<<c<<"\t"<<e<<"\n";
}
if (b!=1){
	cout<<"\n";
}
}
getch();	
}

