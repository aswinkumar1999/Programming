#include<bits/stdc++.h>
using namespace std;

int main(void) {
unsigned long long int a,b,g,i=0;
unsigned long int data[510804];
a=1000000;
data[0]=2;
for (unsigned long long int c=3; c<=a;c+=2){
b=1;
for(i=0;data[i]!='\0';i++){
	if (c%data[i]==0){ 
	b=0;
	break;
	}
}
if (b==1){
	cout<<c<<"\t";
	data[i]=c;
	
}
}	
}

