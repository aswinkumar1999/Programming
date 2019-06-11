#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[20][20],i,j;
  int val=0,maxi=0;
  bool odd=0;
  cin>>i>>j;
  for(int k=0;k<i;k++){
    for(int l=0;l<j;l++){
      cin>>arr[k][l];
    }
  }
  if(arr[0][0]%2==1){
    odd=1;
  }
  for(int k=0;k<i;k++){
    for(int l=0;l<j;l++){
        if(arr[k][l]%2==odd){
          val++;
        }
        if(arr[k][l]%2!=odd){
          maxi = maxi>val?maxi:val;
          val=0;
          odd=arr[k][l]%2;
        }
    }
    val=0;
    odd=arr[k+1][0]%2;
  }
  maxi = maxi>val?maxi:val;
  val=0;
  odd=0;
  if(arr[0][0]%2==1){
    odd=1;
  }
  for(int k=0;k<j;k++){
    for(int l=0;l<i;l++){
        if(arr[l][k]%2==odd){
          val++;
        }
        if(arr[l][k]%2!=odd){
          maxi = maxi>val?maxi:val;
          val=0;
          odd=arr[l][k]+1%2;
        }

    }
    val=0;
    odd=arr[0][k+1]%2;
  }
  maxi = maxi>val?maxi:val;
  cout<<maxi;
  return 0;
}
