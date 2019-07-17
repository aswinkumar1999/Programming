#include<bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main(){
  //Used for Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,l;
  cin>>t;
  double val;
  while(t--){
    //The Code Goes here
    cin>>n;
    val = -0.5 + 0.5*(sqrt(1+8*n));
    l = ceil(val);
    cout<<l<<"\n";
  }
  return 0;
}
