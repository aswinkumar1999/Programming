//Binary search
#include<bits/stdc++.h>
using namespace std;
int Bsearch(int arr[],int n,int item){
	int beg=0,mid,end=n;
	while(beg<=end){
		mid=(beg+end)/2;
		if(arr[mid]==item){
			return mid;
		}
		else if (arr[mid]<item){
			beg=mid+1;
		}
		else 
			end=mid-1;
	}
	return -1;
}
int main(){
	int arr[20],n,i,j,item,index;
	cout<<"\nEnter the no .of elements :";
	cin>>n;
	cout<<"\nEnter the elements :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}	
	cout<<"\nEnter the item to be searched for :";
	cin>>item;
	index=Bsearch(arr,n,item);
	if(index==-1){
		cout<<"\nElement could not be found ";
	}
	else 
	cout<<"\nElement found at index :"<<index <<" Position :"<<index+1;
	return 0;
}
