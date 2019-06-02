#include<bits/stdc++.h>
using namespace std;
long int func(vector<long int>& arr1,vector<long int>& arr2,long int k,long int n){
	for(int i=k;i>0;i--){
	if(arr1[0]>arr2[n-1]){
			return arr2[n-1]+arr1[n-1];		
	}
	swap(arr1[0],arr2[n-1]);
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());	
}
return arr1[n-1]+arr2[n-1];
}
int main(){
	ios_base::sync_with_stdio(false);
	long int n,k,i,skew=(int)1e9;
	cin>>n>>k;
	k=min(n,k);
	vector<long int> shelf1(n);
	vector<long int> shelf2(n);
	for(i=0;i<n;i++)
		cin>>shelf1[i];
	for(i=0;i<n;i++)
		cin>>shelf2[i];
	sort(shelf1.begin(),shelf1.end());
	sort(shelf2.begin(),shelf2.end());
	if(shelf1[n-1]>shelf2[n-1])
		skew=min(skew,func(shelf1,shelf2,k,n));
	else 
		skew=min(skew,func(shelf2,shelf1,k,n));
	cout<<skew;
	return 0;
}
