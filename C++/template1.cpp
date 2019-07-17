#include<bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main(){
  //Used for Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  vector<int> b1(3);
  vector<int> b2(3);
  vector<int> b3(3);
  vector<int> t(3);
  vector<float> h(5);
  vector<float> lives(5);
  vector<float> hours(5);
  long int temp,sum=0;
  while(t--){
    for (int i=0;i<3;i++){
      cin>>b1[i];
    }
    for (int i=0;i<3;i++){
      cout<<b1[i]<<"\t";
    }
    cout<<"\n";
    for (int i=0;i<3;i++){
      cin>>b2[i];
    }
    for (int i=0;i<3;i++){
      cout<<b2[i]<<"\t";
    }
    cout<<"\n";
    for (int i=0;i<3;i++){
      cin>>b3[i];
    }
    for (int i=0;i<3;i++){
      cout<<b3[i]<<"\t";
    }
    cout<<"\n";

    t[0]=b1[0]+b1[1]*b1[2];
    t[1]=b2[0]+b2[1]*b2[2];
    t[2]=b3[0]+b3[1]*b3[2];

    for (int i=0;i<5;i++){
      cin>>h[i];
    }
    for (int i=0;i<5;i++){
      cout<<h[i]<<"\t";
    }
    cout<<"\n";

    for (int i=0;i<5;i++){
      hours[i]=h[i]*365*2;

    }

    for (int i=0;i<5;i++){


    }
    h[1]=2*h[1];
    h[2]=2*h[2];
    h[3]=2*h[3];
    for (int i=0;i<5;i++){
      cout<<h[i]<<"\t";
    }
    cout<<"\n";
    for (int i=0;i<5;i++){
      sum+=h[i];
    }
    cout<<sum;
  }
  return 0;
}
