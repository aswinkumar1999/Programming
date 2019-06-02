#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; unsigned __int128 t0,t1,tn;
    cin>>t0>>t1>>n;
    for(int i=n-2;i>0;i--){
        tn=t0+t1*t1;
        t0=t1;
        t1=tn;
    }
    cout<<tn;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

