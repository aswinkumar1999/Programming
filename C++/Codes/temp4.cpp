#include<iostream>
#include<conio.h>
using namespace std;
char board[8][8];
int a,b,c,d,e,f,z,count=0,dupecount=-1;
int r[10];
void screen();
void clrboard();
void place();
void undoplace();
void dynamicloop();
void screen(){
	cout<<"\n\n";
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			cout<<board[j][i]<<" ";
		}
		cout<<"\n";
	}
}
void undoplace(int a,int b){
const int e=a,f=b;	
c=e;d=f;	
	for (;(c>0)&&(d>0);){
		board[c-1][d-1]='1';c--;d--;
	}
c=e;d=f;
	for (;(c<8)&&(d<8);){
		board[c+1][d+1]='1';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<7);){
		board[c-1][d+1]='1';c--;d++;
	}
c=e;d=f;	
	for (;(c<7)&&(d>0);){
		board[c+1][d-1]='1';c++;d--;
	}
	for (int i=0;i<8;i++){
		board[e][i]='1';
		board[i][f]='1';
	}
board[e][f]='1';		
}
void place(int a,int b){
const int e=a,f=b;	
c=e;d=f;	
	for (;(c>0)&&(d>0);){
		board[c-1][d-1]='0';c--;d--;
	}
c=e;d=f;
	for (;(c<7)&&(d<7);){
		board[c+1][d+1]='0';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<7);){
		board[c-1][d+1]='0';c--;d++;
	}
c=e;d=f;	
	for (;(c<7)&&(d>0);){
		board[c+1][d-1]='0';c++;d--;
	}
	for (int i=0;i<8;i++){
		board[e][i]='0';
		board[i][f]='0';
	}
board[e][f]='3';}

void clrboard(){
	for (int i=0;i<8;i++){
 	for (int j=0;j<8;j++){
 		board[i][j]='1';	 
		 }
 }
}
void dynamicloop(){
if (dupecount<=count){	
	for (;r[z]<8;r[z]++){
	
		if (board[r[z]][z]=='1'){	
			place(r[z],z);//screen();system("pause");
			int space=0;
			for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if(board[j][i]=='3'){space++;}
	}
}
			
			if (space==8){
				count++;
				dupecount=count;
				screen();
				cout<<"\n\n\n";
				
				undoplace(r[z],z);
			}
			else
				r[z+1]=0;r[z]++;z++;
				dynamicloop();
	}

}
undoplace(r[z-1]-1,z-1);
for (int i=0;i<z-1;i++){
place(r[i]-1,i);
}
z--;
dynamicloop();	

}
}
int main(){
	clrboard();
	z=0;
	r[0]=0;
	dynamicloop();
	cout<<dupecount;
	return 0;
	getch();
	}
