#include<iostream>
#include<math.h>
#include<cmath>
#include<vector>
#include<conio.h>
using namespace std;


int main(){
	float h,i,j,k,l,m,n,o,p,q=0;
	int z;
	cin>>z;
    vector<float> a(z);vector<float> b(z);vector<float> c(z);vector<float> d(z);vector<float> e(z);vector<float> f(z);vector<float> g(z);
	for (int y=0;y<z;y++){
	cin>>a[y]>>b[y]>>c[y]>>d[y]>>e[y]>>f[y]>>g[y];
               
    }
    for(int y=0;y<z;y++){   q=0; 
		o=(g[y]-e[y])/(f[y]-d[y]);
		p=(g[y]-(o*f[y]));
		l=((-2*o*p*b[y])+(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
		m=((-2*o*p*b[y])-(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));
	if (abs(l-f[y])<=0.000001){
		h=m;i=p+(h*o);}
	else 
		{h=l;i=p+(h*o);}
	cout<<h;system("pause");cout<<i;system("pause");
	
	if ((d[y]==f[y])&&(f[y]==0)){
		cout<<"1\n"; 
	}
	else {
	for (;;){
		k=(g[y]-e[y])/(f[y]-d[y]);cout<<k;system("pause");
		n=(b[y]*g[y])/(a[y]*f[y]);cout<<n;system("pause");
		o=(((n*n)*k)-k+(2*n))/(1-(n*n)+(2*n*k));cout<<o;system("pause");
		p=(g[y]-(f[y]*o));cout<<p;system("pause");
		l=((-2*o*p*b[y])+(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));cout<<l;system("pause");
		m=((-2*o*p*b[y])-(sqrt((4*o*o*p*p*b[y]*b[y])-(4*((b[y]*p*p)-c[y])*(a[y]+(b[y]*o*o))))))/(2*(a[y]+(b[y]*o*o)));cout<<m;system("pause");
	if (abs(l-f[y])<=0.000001){cout<<"\t"<<"1";
		d[y]=f[y];e[y]=g[y];f[y]=m;g[y]=p+(f[y]*o);}
	else 
		{cout<<"\t2";d[y]=f[y];e[y]=g[y];f[y]=l;g[y]=p+(f[y]*o);}
	cout<<"\n"<<f[y]<<"\t"<<g[y]<<"\n";
	q++	;cout<<q;system("pause");
	if ( (abs(f[y]-h)<=0.01)){
		break;	
	}
	}
	cout<<q<<"\n";
}
}
getch();getch();getch();getch();
	return 0;
}
