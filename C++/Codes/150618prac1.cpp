#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[20];
	int n,ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		ans+=arr[i];
	}
	cout<<ans;
	
	return 0;
}
