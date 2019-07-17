//--------------------------------------------------------------
//Author : Aswinkumar
//Date :
//Problem_link :
//--------------------------------------------------------------
#include<bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main(){
  //Used for Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,amt,a[4];
  bool pos=false;
  long int max_val;
  float max_notes=0;
  vector<int> a_new(4,0);
  cin>>n>>amt>>a[0]>>a[1]>>a[2]>>a[3];
  a_new[3] = n>a[3]?a[3]:n;
  a_new[2] = ((n-a[3]>0)&&(n-a[3]>a[2]))?a[2]:n-a[3];
  a_new[1] = ((n-a[3]-a[2]>0)&&(n-a[3]-a[2]>a[1]))?a[1]:n-a[3]-a[2];
  a_new[0] = ((n-a[3]-a[2]-a[1]>0)&&(n-a[3]-a[2]-a[1]>a[0]))?a[0]:n-a[3]-a[2]-a[1];
  //Check if it is possible first
  max_val = a_new[3]*1000+a_new[2]*500+a_new[1]*200+a_new[0]*100;
  if(amt>max_val){
    cout<<"0";
    return 0;
  }
  for(int i=0;i<=a[3];i++){
    if(i*1000>amt||max_notes==n){
      break;
    }
    for(int j=0;j<=a[2];j++){
      if(i*1000+j*500>amt||max_notes==n){
        break;
      }
      for(int k=0;k<=a[1];k++){
        if(i*1000+j*500+k*200>amt||max_notes==n){
          break;
        }
        for(int l=0;l<=a[0];l++){
          if(i*1000+j*500+k*200+l*100==amt){
            if(i+j+k+l<=n){
              pos=true;
              max_notes=max(max_notes,(float)(i+j+k+l));
            }
          }
        }
      }
    }
  }
  if(pos){
    cout<<(int)max_notes;
  }
  if(!pos){
    cout<<"0";
  }
  return 0;
}
