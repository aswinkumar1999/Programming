#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<stdio.h>
int main(){
string s1;
char out[40];
int val=0;
getline(cin,s1);
int s1_len;
for(int i=0;s1[i]!='\0';i++){
	if(s1[i]==' '){
		val++;
	}
	s1_len=i;
}
int i = s1_len;
for(int j=i+2*val;j>=0;j--){
	if(s1[i]==' '){
	out[j]=' ';j--;
	out[j]=' ';j--;
	}
	out[j]=s1[i];
	i--;
}
for(int i=0;out[i]!='\0';i++){
	if(out[i]==' '){
		out[i]='%';i++;
		out[i]='2';i++;
		out[i]='0';
	}
}
cout<<out;
}
