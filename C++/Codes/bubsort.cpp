//bubble sort
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[20],n,i,j,temp;
	cout<<"\nEnter the no. of elements :";
	cin>>n;
	cout<<"\nEnter the Elements :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
		cout<<"\nArray after iteration "<<i+1<<" :";
		for(int h=0;h<n;h++){
			cout<<arr[h]<<" ";
		}
	}
	return 0;
}
