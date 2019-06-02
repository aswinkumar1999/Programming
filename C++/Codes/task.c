#include<stdio.h>
#include<conio.h>
int isPrime(int,int);
void main(){
    int num,prime;
	for(num =2;;num++){
    prime = isPrime(num,num/2);
   if(prime==1)
        printf("%d \t",num);
}
}
int isPrime(int num,int i){
    if(i==1){
        return 1;
    }else{
       if(num%i==0)
         return 0;
       else
         isPrime(num,i-1);
    }
}

