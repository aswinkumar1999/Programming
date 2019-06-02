#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int a,b,c,d,e,f,h;
    cin>>a;
    for(b=0;b<a;b++){
        cin>>c;d=1,e=2;
        f=3;
        for(;d+e<=c;){
           h=d+e;
           d=e;
           e=h;
            f=f+e;
            cout<<"\n"<<d<<"\t"<<e<<"\t"<<f;
        }
        
        
        cout<<f<<"\n";
        
        
        
        
        
        
        
    }
    return 0;
}

