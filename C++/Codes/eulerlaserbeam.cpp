#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;


int main(){
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q=0;
	int y;
	cin>>y;
	for (int t=0;t<y;t++){
	cin>>a>>b>>c>>d>>e>>f>>g;
	
	}
	
	k=(g-e)/(f-d);
		n=(b*g)/(a*f);
		o=(((n*n)*k)-k+(2*n))/(1-(n*n)+(2*n*k));
		p=(g-(f*o));
		l=((-2*o*p*b)+(sqrt((4*o*o*p*p*b*b)-(4*((b*p*p)-c)*(a+(b*o*o))))))/(2*(a+(b*o*o)));
		m=((-2*o*p*b)-(sqrt((4*o*o*p*p*b*b)-(4*((b*p*p)-c)*(a+(b*o*o))))))/(2*(a+(b*o*o)));
	if (l==f){
		h=m;i=p+(f*o);}
	else 
		{h=l;i=p+(f*o);}
	
	
	
	for (int t=0;t<y;t++){
	if ((d==f)&&(f==0)){
		cout<<"1\n"; 
	}
	else {
	for (;;){
		k=(g-e)/(f-d);
		n=(b*g)/(a*f);
		o=(((n*n)*k)-k+(2*n))/(1-(n*n)+(2*n*k));
		p=(g-(f*o));
		l=((-2*o*p*b)+(sqrt((4*o*o*p*p*b*b)-(4*((b*p*p)-c)*(a+(b*o*o))))))/(2*(a+(b*o*o)));
		m=((-2*o*p*b)-(sqrt((4*o*o*p*p*b*b)-(4*((b*p*p)-c)*(a+(b*o*o))))))/(2*(a+(b*o*o)));
	if (l==f){
		d=f;e=g;f=m;g=p+(f*o);}
	else 
		{d=f;e=g;f=l;g=p+(f*o);}
	q++	;
	if ( (abs(f-h)<=0.01)&&(abs(g-i)<=0.01)){
		break;	
	}
	}
	cout<<q<<"\n";
}
}
	return 0;
}
