#include<bits/stdc++.h>
#define INF 1000000007

using namespace std;

long long int sum;
long int t,m,n,p,q;

void recu(){
  if( m-p > n-q ){
    if(!(p||q)){
      sum++;
      sum=sum%INF;
    }
    if(q && (p||q)){
      q--;
      recu();
      q++;
    }
    if(p && (p||q)){
      p--;
      recu();
      p++;
    }
  }
}
int main(){
cin>>t;
while(t--)
  {
  cin>>m>>n;
  sum=0;
  p=m-2;
  q=n;
  recu();
  cout<<sum<<"\n";
  }
return 0;
}
