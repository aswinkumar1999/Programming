#include<bits/stdc++.h>

__global__
void gpufib(){
  double a,b,c;
  a=0;b=1;
  for(long long int i=0;i< (1<<29);i++){
  c=a+b;
  a=b;
  b=c;
  }
}

int main(){
gpufib<<<1,1>>>();
cudaDeviceSynchronize();
std::cout<<"Done";

}
