#include<bits/stdc++.h>
using namespace std;
#define N 8000

__global__
void allzero(int *arr){
  arr[threadIdx.x]=0;
}

__global__
void additoarray(int *arr){
  arr[blockIdx.x*blockDim.x+threadIdx.x]=blockIdx.x*blockDim.x+threadIdx.x;
}
//Removing Thread Divergence
//Pseudo code
//Q : // assert(x == y || x == z);if (x == y) x = z;else x = y;
__global__
void no_thread_divergence(){
  x= (x==y||x==z)?z:y;
}

int main(void) {
  int *arr;
  cudaMallocManaged(&arr,N*sizeof(int));
  int threadsperblock=256;
  int numblocks = (N/threadsperblock)+1;
  allzero <<<numblocks,threadsperblock>>>(arr);
  cudaDeviceSynchronize();
  additoarray<<<numblocks,threadsperblock>>>(arr);
  cudaDeviceSynchronize();
  for(int i=0;i<N;i++){
    cout<<arr[i]<<"\t";
    
  }
}
