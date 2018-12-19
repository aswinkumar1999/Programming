#include<bits/stdc++.h>

int main(){
  double a,b,c;
  long long int i;
  a=0;b=1;
  for(long long int i=0;i< (1<<29);i++){
  c=a+b;
  a=b;
  b=c;
  }
//std::cout<<c;
std::cout<<"Done";


}
