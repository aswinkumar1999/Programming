#include<iostream>
#include <conio.h>
#include<fstream>
using namespace std;
char board[15][15];
int a,b;int c,d;
	ofstream myfile;
void screen(){
	cout<<"\n\n";
	myfile<<"\n\n";
	for (int i=0;i<15;i++){
		for (int j=0;j<15;j++){
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
	for (;(c<15)&&(d<15);){
		board[c+1][d+1]='1';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<15);){
		board[c-1][d+1]='1';c--;d++;
	}
c=e;d=f;	
	for (;(c<15)&&(d>0);){
		board[c+1][d-1]='1';c++;d--;
	}
	for (int i=0;i<15;i++){
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
	for (;(c<15)&&(d<15);){
		board[c+1][d+1]='0';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<15);){
		board[c-1][d+1]='0';c--;d++;
	}
c=e;d=f;	
	for (;(c<15)&&(d>0);){
		board[c+1][d-1]='0';c++;d--;
	}
	for (int i=0;i<15;i++){
		board[e][i]='0';
		board[i][f]='0';
	}
board[e][f]='3';}
int main(){
myfile.open ("15-Queens.txt");
 for (int i=0;i<15;i++){
 	for (int j=0;j<15;j++){
 		board[i][j]='1';	 
		 }
 }	
int q,w,e,r,t,y,u,i,o,p,l,k,j,h,g,count=0;
for ( q=0;q<15;q++){
	place(q,0);
		for ( w=0;w<15;w++){if(board[w][1]=='1'){	place(w,1);
					for( e=0;e<15;e++){if(board[e][2]=='1'){	place(e,2);
						for( r=0;r<15;r++){if(board[r][3]=='1'){	place(r,3);
							for ( t=0;t<15;t++){if(board[t][4]=='1'){	place(t,4);
								for ( y=0;y<15;y++){if(board[y][5]=='1'){	place(y,5);
									for ( u=0;u<15;u++){if(board[u][6]=='1'){	place(u,6);
										for ( i=0;i<15;i++){if(board[i][7]=='1'){	place(i,7);
											for (o=0;o<15;o++){if(board[o][8]=='1'){	place(o,8);
												for (p=0;p<15;p++){if(board[p][9]=='1'){	place(p,9);
													for (l=0;l<15;l++){if(board[l][10]=='1'){	place(l,10);
														for (k=0;k<15;k++){if(board[k][11]=='1'){	place(k,11);
															for (j=0;j<15;j++){if(board[j][12]=='1'){	place(j,12);
																for (h=0;h<15;h++){if(board[h][13]=='1'){	place(h,13);
																	for (g=0;g<15;g++){if(board[g][14]=='1'){	place(g,14);		
																		
																		count++;
																		
																}undoplace(g,14);place(h,13);place(j,12);place(k,11);place(l,10);place(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
															}undoplace(h,13);place(j,12);place(k,11);place(l,10);place(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
														}undoplace(j,12);place(k,11);place(l,10);place(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
													}undoplace(k,11);place(l,10);place(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
												}undoplace(l,10);place(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
											}undoplace(p,9);place(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
										}undoplace(o,8);place(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}
									}undoplace(i,7);place(u,6);place(y,5);place(t,4);place(r,3);place(e,2);place(w,1);place(q,0);}	
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
