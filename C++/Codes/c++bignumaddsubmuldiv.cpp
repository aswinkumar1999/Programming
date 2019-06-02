#include<bits/stdc++.h>
using namespace std;
int a[200],b[200],c[200],temp[200];
void add(){
	
}
int main(){
	int tempa,tempb;
	cin>>tempa,tempb;
	/*Variable to Array*/
	//START
	for(int i=199;i>0;i--){
	if(tempa >0){
		a[i]=tempa%(10);
		tempa-=a[i];
		tempa/=10;
	}
	else
		break;
    }
	//END
	
	return 0;
}
