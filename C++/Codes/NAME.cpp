#include<bits/stdc++.h>
using namespace std;
int main(void){
  long long int a,i,j;
  bool prime;
  a=1000000;
  cout<<"2";
  for(i=3;i<=a;i=i+2)  {		
	prime = true;
	for(j=3;j<=i/4+1;j++)
  	  {
  	    if(i%j==0)
		 	prime = false;
		 	break;
	  }
	if(prime){
	  cout<<i<<"\t";
	}
	  
	}	
  }
