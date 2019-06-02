#include<bits/stdc++.h>
#include<conio.h>
#include<ctime>
using namespace std;


const int width=60;
const int height=20;

clock_t start,now,taken,threshold=0.1;

bool gamestate;
int length = 5;
char temp,input,lastinput='w';
int screen[height][width];
int posx,posy,valx,valy;

void findpos(int val);
void findpos();
void move_snake();
char keyvalue();
void cls();
void print();


void findpos(int val){
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			if(screen[i][j]==val){
			valx=i;valy=j;	
			}	
		}
	}
}

void findpos(){
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			if(screen[i][j]==1){
			posx=i;posy=j;	
			}	
		}
	}
}


void move_snake(char input){
	findpos();
	if(input=='w'){
		posy--;	
	}
	if(input=='a'){
		posx--;
	}
	if(input=='s'){
		posy++;
	}
	if(input=='d'){
		posx++;
	}
	screen[posx][posy]=-1;
	for(int val=length-1;val>0;val--){
		findpos(val);
		screen[valx][valy]=val+1;
	}
	screen[posx][posy]=1;
}

char keyvalue(){
	char value=lastinput;
	if(kbhit()){
		input=getch();
	}
	return value;
}


void cls(){
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			screen[i][j]=0;	
		}
	}
}


void print(){
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			if(screen[i][j]==0){
				cout<<" ";
			}
			else if(screen[i][j]==1){
				cout<<"@";
			}
			else 
				cout<<"*";
		}
		cout<<"\n";
	}
}

void game(){
	cls();
	print();
	cout<<"Here I am 0";
	gamestate = true;
	cout<<"Here I am 0.5";
	clock_t start = clock();
	cout<<"Here I am 1";
	while(gamestate){
		cout<<"Here I am 2";
		input=keyvalue();
		now=clock();
		taken=now-start;
		cout<<"Here I am 3";
		if(taken>threshold){
			cout<<"Here I am 4";
			start=now;
			move_snake(input);
			lastinput=input;
			print();
		}	
	}
}

int main(){	
	game();	
	return 0;
}

