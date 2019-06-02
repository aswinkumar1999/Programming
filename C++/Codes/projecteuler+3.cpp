#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int a,b,c,d,e,i,f,flag=1,g,h,k;
    cin>>a;
    for(b=0;b<a;b++){
        cin>>c;//cout<<c<<"\t"<<d<<"\t";system("pause");
        flag=1;
           while(c%2==0) c/=2;
	for(i = 3; i*i<=c; i += 2)
	{
		while (c % i == 0)
		{
            c/=i;
		}
	}
    if(c==1) 
		cout<<i-2<<"\n";
else cout<<c<<"\n";
  }   
    return 0;
}

