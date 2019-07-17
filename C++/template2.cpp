#include<bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main(){
  //Used for Fast I/O
  long int n,one=0,two=0,five=-1;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n;
  if(n>=5){
  five = (n - (n%5))/5 -1;
  two = 2;
  one =1;
  }
  if(n%5==1){
    one++;
  }
  if(n%5==2){
    two++;
  }
  if(n%5==3){
    one++;two++;
  }
  if(n%5==4){
    two++;two++;
  }
  if(five==-1){
    five=0;
    if((n%5)%2==0){
      two--;one++;one++;
    }
  }
  cout<<five+two+one<<" "<<five<<" "<<two<<" "<<one;
  return 0;
}
