//linear search
#include<bits/stdc++.h>

using namespace std;
int Lsearch(int arr[],int n,int item){
	for(int i=0;i<n;i++){
		if(arr[i]==item){
			return i;
		}
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
	index=Lsearch(arr,n,item);
	if(index==-1){
		cout<<"\nElement could not be found ";
	}
	else 
	cout<<"\nElement found at index :"<<index <<" Position :"<<index+1;
	return 0;
}
