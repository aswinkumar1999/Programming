#include<iostream>
#include <conio.h>
#include<fstream>
using namespace std;
char board[8][8];
int a,b;int c,d;
	ofstream myfile;
void screen(){
	cout<<"\n\n";
	myfile<<"\n\n";
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			cout<<board[j][i]<<" ";
			myfile<<board[j][i]<<" ";
		}
		cout<<"\n";
		myfile<<"\n";
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
	for (;(c>0)&&(d<8);){
		board[c-1][d+1]='1';c--;d++;
	}
c=e;d=f;	
	for (;(c<8)&&(d>0);){
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
	for (;(c<8)&&(d<8);){
		board[c+1][d+1]='0';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<8);){
		board[c-1][d+1]='0';c--;d++;
	}
c=e;d=f;	
	for (;(c<8)&&(d>0);){
		board[c+1][d-1]='0';c++;d--;
	}
	for (int i=0;i<8;i++){
		board[e][i]='0';
		board[i][f]='0';
	}
board[e][f]='3';}
int main(){
myfile.open ("8-Queens.txt");
 for (int i=0;i<8;i++){
 	for (int j=0;j<8;j++){
 		board[i][j]='1';	 
		 }
 }	
int q,w,e,r,t,y,u,i,count=0;
for ( q=0;q<8;q++){
	place(q,0);
		for ( w=0;w<8;w++){if(board[w][1]=='1'){	place(w,1);
					for( e=0;e<8;e++){if(board[e][2]=='1'){	place(e,2);
						for( r=0;r<8;r++){if(board[r][3]=='1'){	place(r,3);
							for ( t=0;t<8;t++){if(board[t][4]=='1'){	place(t,4);
								for ( y=0;y<8;y++){if(board[y][5]=='1'){	place(y,5);
									for ( u=0;u<8;u++){if(board[u][6]=='1'){	place(u,6);
										for ( i=0;i<8;i++){if(board[i][7]=='1'){	place(i,7);
									cout<<"\n\n";
									count++;
									screen();
										}
									undoplace(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}	
								}undoplace(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);	}
							}undoplace(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);	}
						}undoplace(t,4);place(r,3);place(e,2);place(w,1);place(q,0);	}
					}undoplace(r,3);place(e,2);place(w,1);place(q,0);	}
				}undoplace(e,2);place(w,1);place(q,0);	}
			}undoplace(w,1);place(q,0); 	
		}undoplace(q,0);
	}
myfile.close();	
	cout<<"\n\n\n"<<count;
getch();	
}