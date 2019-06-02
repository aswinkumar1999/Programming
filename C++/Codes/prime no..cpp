#include<iostream>
#include<conio.h>
using namespace std;

int main(void) {
unsigned long long int a,b,g;
cin>>a;
for (unsigned long long int c=2; c<=a;c++){
b=1;
g=(c/2)+1;
for(unsigned long long int d=2 ; d<c ; d++){
	if (c%d==0){ b=0;d=c;
	}
}
if (b==1){
	cout<<c<<"\t";
}
}
getch();	
}

