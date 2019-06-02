#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	randomize();
	int Num,Rndnum;
	cin>>Num;
	Rndnum=random(Num)+7;
	for(int N=1;N<=Rndnum;N++)
		cout<<N<<" ";
	
	
	return 0;
}
