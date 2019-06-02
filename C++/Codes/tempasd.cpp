#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long double h,i,j,k,l,m,n,o,p,q=0;
	int z;
	cin>>z;
    vector<long double> a(z);vector<long double> b(z);vector<long double> c(z);vector<long double> d(z);vector<long double> e(z);vector<long double> f(z);vector<long double> g(z);
	for (int y=0;y<z;y++){
	cin>>a[y]>>b[y]>>c[y]>>d[y]>>e[y]>>f[y]>>g[y];
   }
    //z=1;a[0]=4;b[0]=1;c[0]=100;d[0]=0.00;e[0]=10.1;f[0]=1.4;g[0]=-9.6;
    for(int y=0;y<z;y++){ 
		if ((d[y]==f[y])&&(f[y]==0)){
		cout<<"1\n"; 
	}
	else {
		q=0; 
		o=(g[y]-e[y])/(f[y]-d[y]);
		p=(g[y]-(o*f[y]));
		l=((-2*o*p*b[y])+(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
		m=((-2*o*p*b[y])-(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
	if (abs(l-f[y])<=0.00001){
		h=m;i=p+(h*o);}
	else 
		{h=l;i=p+(h*o);}	
	
	for (;;){
		k=(g[y]-e[y])/(f[y]-d[y]);
		n=(b[y]*g[y])/(a[y]*f[y]);
		o=(((n*n)*k)-k+(2*n))/(1-(n*n)+(2*n*k));
		p=(g[y]-(f[y]*o));
		l=((-2*o*p*b[y])+(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
		m=((-2*o*p*b[y])-(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
	if (abs(l-f[y])<=0.00001){
		d[y]=f[y];e[y]=g[y];f[y]=m;g[y]=p+(f[y]*o);}
	else 
		{d[y]=f[y];e[y]=g[y];f[y]=l;g[y]=p+(f[y]*o);}
	q++	;
	if ( (abs(f[y])<=0.01)&&((i/g[y])>0)){
		break;	
	}
	}
	cout<<q<<"\n";
}}
	return 0;
}
