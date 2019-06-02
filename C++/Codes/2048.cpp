#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
int score;
int gamegrid[4][4];
string space[4][4];
void gamescreen();
void spaces();
void cleargame();
void cleargame(){
	for (int a=0;a<4;a++){
		for (int b=0;b<4;b++){
			   space[a][b]="    ";	
		}
	}
}
void spaces(){
	for (int a=0;a<4;a++){
		for (int b=0;b<4;b++){
			if (gamegrid[a][b]>1&&gamegrid[a][b]<10){
				space[a][b]="   ";
			}
			else if (gamegrid[a][b]>10&&gamegrid[a][b]<100){
				space[a][b]="  ";	
			}
			else if (gamegrid[a][b]>100&&gamegrid[a][b]<1000){
				space[a][b]=" ";
			}
			else if (gamegrid[a][b]>1000&&gamegrid[a][b]<10000){
				space[a][b]='\0';	
			}
			else
			   space[a][b]="    ";	
		}
	}
}
int main(){
	cleargame();
	
	gamescreen();	
	return 0;
}
void gamescreen(){
	system("cls");
	cout<<"\n\t\t\t\t    2048!";
	spaces();
	cout<<"\n\n";
	cout<<"\t\t ------------------------------------------ ";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t|   "<<space[0][0]<<"   |   "<<space[0][1]<<"   |   "<<space[0][2]<<"   |   "<<space[0][3]<<"   |";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t ------------------------------------------- ";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t|   "<<space[1][0]<<"   |   "<<space[1][1]<<"   |   "<<space[1][2]<<"   |   "<<space[1][3]<<"   |";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t ------------------------------------------- ";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t|   "<<space[2][0]<<"   |   "<<space[2][1]<<"   |   "<<space[2][2]<<"   |   "<<space[2][3]<<"   |";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t ------------------------------------------- ";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t|   "<<space[3][0]<<"   |   "<<space[3][1]<<"   |   "<<space[3][2]<<"   |   "<<space[3][3]<<"   |";	cout<<"\n";
	cout<<"\t\t|          |          |          |          |";	cout<<"\n";
	cout<<"\t\t ------------------------------------------- ";	cout<<"\n";
		
} 
