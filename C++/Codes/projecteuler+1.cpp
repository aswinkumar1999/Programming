#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin>>n;
    for (int a=0;a<n;a++){
        long long int c,d,e,f,sum=0;
        cin>>e;
        c=(e/3);
        d=(e/5);
        f=(e/15);
        if (e%3==0){
            c--;
        }
        if(e%5==0){
            d--;
        }
        if(e%15==0){
        	f--;
		}

        for(int i=1;i<=c;i++){
        sum=sum+(i*3);
    }
	        for(int j=1;j<=d;j++){
        sum=sum+(j*5);
    }   
           for(int k=1;k<=f;k++){
           	sum=sum-(k*15);
		   }
		   cout<<sum;
        
        
    }
    return 0;
}

