// Selection sort
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[10],k,x,i,j,n;
	cout<<"\nEnter the no.of elements to be entered :";
	cin>>n;
	cout<<"\nEnter the elements :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		x=arr[i];
		k=x;
			for(j=i;j<n;j++){
				if(arr[j]<x){
					x=arr[j];
					k=j;
				}
			}
		arr[k]=arr[i];
		arr[i]=x;
		cout<<"\nArray after iteration "<<i+1<<" :";
		for(int h=0;h<n;h++){
			cout<<arr[h]<<" ";
		}	
	}
	cout<<"\nArray after sorting :";
		for(int h=0;h<n;h++){
			cout<<arr[h]<<" ";
		}	
	return 0;
}
