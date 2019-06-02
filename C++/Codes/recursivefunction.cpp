#include<bits/stdc++.h>
using namespace std;
int a[5],sum=0,j=0;
void recursivefunction(){
	sum+=a[j];
	j++;
	if(j<5){
		recursivefunction();
	}	
		
	}
	
int main(void){
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	recursivefunction();
	cout<<sum;
}
