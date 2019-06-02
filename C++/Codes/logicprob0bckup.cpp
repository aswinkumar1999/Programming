#include<iostream>
#include<conio.h>
int path[40],m=0,n=4,o=4,k,l,p,q,r,s,u,z,x,w,y;
	int a[4][4];
using namespace std;
void part1();
void part2();
void part3();
int main(){
	for (int b=0;b<4;++b){
	for (int c=0;c<4;++c){
		cin>>a[b][c];
	}	
	}
	for (int me=0;me<40;me++){
		path[me]=0;
	}
	part1();
	for (int v=0;v<40;v++){
	cout<<"\n\t"<<path[v];
}			  
return 0;
}
	

void part1(){
	for (k=0;k<n;k++){
		path[m]+=a[k][0];
	}
	for (l=0;l<o;l++){
		path[m]+=a[k][l];
		if (l+k==6){
			if (n!=0){
				n--;
				m++;
				part1();
			}
			else 
		   		 o--;
		   		 m++;
		}
	}
	z=4,y=4;
	part2();
}

void part2(){
	for (p=k+1;p<z;p++){
	  	path[m]+=a[p][l];
	  	if (l+p==6){
	  		if (z-p!=1){
	  			z--;
	  		path[m+1]=path[m];
	  		m++;
	  		 part2();
			   }
			else 
			m++;
			part1();    
	}	}
	for (q=l+1;q<y;q++){
		path[m]+=a[q][l];
		if (l+q==6){
				if (p+1==z&&q+1==y){
					m++;
					part1();
				}
				else if (z-p>1){
					z--;
					path[m+1]=path[m];
					m++;
					part2();
				}
				else if (y-p>1){
					y--;
					path[m+1]=path[m];
					m++;
					part1();
				}
			} 
		  }
	x=4,w=4;
	part3();
}

void part3(){
	for (r=p+1;r<x;r++){
	  	path[m]+=a[r][l];
	  	if (l+r==6){
	  		if (x-r!=1){
	  			x--;
	  				path[m+1]=path[m];
	  		m++;
	  		 part3();
			   }
			else 
			m++;
			part1();    
	}
	}
	for (s=l+1;s<y;s++){
		path[m]+=a[r][s];
		if (s+r==6){
				if (r+1==z&&q+1==y){
					path[m+1]=path[m];
					m++;
					part2();
				}
				else if (x-r>1){
					x--;
					path[m+1]=path[m];
					m++;
					part3();
				}
				else if (w-s>1){
					w--;
					m++;
					part1();
				}
			} 
		  }
	for (u=r+1;u<4;u++){
		path[m]+=a[r][u];
		 if (u+r==6){
		 	m++;
		 	part1();
		 }
	}
}

