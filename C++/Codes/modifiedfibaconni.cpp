#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    long double d,e,f;
    cin>>a>>b;
    c=10;
    d=a;e=b;cout<<"\n"<<a<<"\n"<<b;
    for (int i=3;i<=c;i++){
        f=(d)+(e*e);
        d=e;
        e=f;
        cout<<"\n"<<setprecision(0)<<fixed<<e<<"\t"<<d;
    }
    
    return 0;
}

