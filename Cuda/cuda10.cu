#include <iostream>
#include <math.h>
// Kernel function to generate random numbers
__global__
void genran(int *rnd,double m)
{
  double n,a=1103515245, c=12345;
   n=blockIdx.x*blockDim.x+threadIdx.x;
   //n=threadIdx.x;
   for(int i=0;i<threadIdx.x;i++)
   n=fmod(((n*a)+c),m);
   __syncthreads();
   atomicAdd(&rnd[(unsigned long int)n],1);
}


int main(void)
{
  int t=29;
  long int m = pow(2,t);
  int *rnd;
  double val;

  // Allocate Unified Memory – accessible from CPU or GPU
  cudaMallocManaged(&rnd, m*sizeof(int));

  // initialize
    val = m;
  for (int i = 0; i < m; i++) {
    rnd[i] = 0;
  }

  //generate random numbers
  int blockSize = 128;
  int numblocks = (m+blockSize-1)/blockSize;
  // Run kernel
  genran<<<numblocks, blockSize>>>(rnd,val);

  // Wait for GPU to finish before accessing on host
  cudaDeviceSynchronize();

  //Generate Histrogram
  long double count =0,j=0;
  for(long int i=0;i<m;++i)
  {
   count+=rnd[i];
   j++;
   if(j==pow(2,t-5))
   {
     j=0;
     printf("|");
     count/=pow(2,t-10);
     for(int k=0;k<count;++k)
     printf("*");
     printf("\n");
     count=0;
   }
  }
  // Free memory
  cudaFree(rnd);
  return 0;
}
