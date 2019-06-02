#include<iostream>
#include <conio.h>
#include<fstream>
using namespace std;
char board[8][8];
int a,b,c,d,z=0;
int r[100],count=0;	
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
	for (;(c<7)&&(d<7);){
		board[c+1][d+1]='0';c++;d++;
	}	
c=e;d=f;	
	for (;(c>0)&&(d<7);){
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
	
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			board[j][i]='1';
		}
		cout<<"\n";
	}	

screen();
place(1,5);
screen();
undoplace(1,5);


screen();
getch();	
}
