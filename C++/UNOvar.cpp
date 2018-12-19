#include<bits/stdc++.h>

using namespace std;

int main(){
  int arr[10];
  for(int i=0;i<=9;i++){
    arr[i]=0;
  }
  for(int x=0;x<=9;x++){
    for(int y=0;y<=9;y++){
      arr[((x+y)%10)]++;
      arr[(abs((x-y))%10)]++;

    }
  }
  for(int i=0;i<=9;i++){
    cout<<"\t"<<arr[i];
  }
  cout<<"\n";
  for(int i=0;i<=9;i++){
    for(int t=0;t<arr[i];t++){
      cout<<"*";
    }
    cout<<"\t"<<"\n";
  }
}
