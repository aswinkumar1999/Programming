//insertionsort
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[20],n,i,j,x;
	cout<<"\nEnter no. of elements :";
	cin>>n;
	cout<<"\nEnter the elements :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}	
	for(i=1;i<n;i++){
		x=arr[i];
		j=i;
		while(arr[j-1]>x&&j-1>=0)
		j--;
		for(int k=i;k>j;k--)
			arr[k]=arr[k-1];
		arr[j]=x;
		cout<<"\nArray after iteration "<<i+1<<" :";
		for(int h=0;h<n;h++){
		cout<<arr[h]<<" ";
	}
	}
	
	return 0;
}
