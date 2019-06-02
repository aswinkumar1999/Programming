#include<bits/stdc++.h>
#include<omp.h>
using namespace std;
int main(){
	int a = omp_get_num_procs();
	cout<<a;
	#pragma omp parallel 
	{
	cout<<"Hello world";
	}
	return 0;
}
