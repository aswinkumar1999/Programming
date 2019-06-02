#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(void) {
unsigned long long int a,b,g,e;
cin>>a;
for (int c=1;c<=a;c++ ){
b=1;
e=(pow(2,c))+1;
g=(e/2)+1;
cout<<c<<"\t";
for (unsigned long long int d=2;d<=g ;d++){
if (e%d==0){b=0; d=g;
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

