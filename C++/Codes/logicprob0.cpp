#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[4][4];
	for (int b=0;b<4;++b){
	for (int c=0;c<4;++c){
		cin>>a[b][c];
	}	
	}
int path[40],m=0,n=4,o=4,k,l,p,q,r,s,u;
start:
	{
	m++;
	for (k=0;k<n;k++){
		path[m]+=a[0][k];
	}
	for (l=0;l<o;l++){
		path[m]+=a[l][k];
		if (l+k==6){
			m++;
			if (n!=0){
				n--;
			goto start;	
			}
			else 
		   		 o--;
			goto start;
		}
	}
	int z=4,y=4;
start1: 
	{
	m++;	
	for (p=k+1;p<z;p++){
	  	path[m]+=a[l][p];
	  	if (l+p==6){
	  		if (z-p!=1){
	  			z--;
	  		path[m+1]=path[m];
	  		m++;
	  		 goto start1;}
			else 
			m++;
			goto start;    
	}	}
	for (q=l+1;q<y;q++){
		path[m]+=a[l][q];
		if (l+q==6){
				if (p+1==z&&q+1==y){
					m++;
					goto start;
				}
				else if (z-p>1){
					z--;
					path[m+1]=path[m];
					m++;
					goto start1;
				}
				else if (y-p>1){
					y--;
					path[m+1]=path[m];
					m++;
					goto start1;
				}
			} 
		  }
	int x=4,w=4;
start2:
{
		m++;
	for (r=p+1;r<x;r++){
	  	path[m]+=a[l][r];
	  	if (l+r==6){
	  		if (x-r!=1){
	  			x--;
	  				path[m+1]=path[m];
	  		m++;
	  		 goto start2;
			   }
			else 
			m++;
			goto start;    
	}
	}
	for (s=l+1;s<y;s++){
		path[m]+=a[s][r];
		if (s+r==6){
				if (r+1==z&&q+1==y){
					goto start1;
					path[m+1]=path[m];
					m++;
				}
				else if (x-r>1){
					x--;
					goto start2;
					path[m+1]=path[m];
					m++;
				}
				else if (w-s>1){
					w--;
					goto start;
					m++;
				}
			} 
		  }
	for (u=r+1;u<4;u++){
		path[m]+=a[u][r];
		 if (u+r==6){
		 	m++;
		 	goto start;
		 }
	}
}}}
for (int v=0;path[v]!='\0';v++){
	cout<<"\n\t"<<path[v];
}			  
return 0;
}
