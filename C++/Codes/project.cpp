// 11 Grade Comnputer Science Project - 2015

#include <iostream>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
char game[9];
char single_player[20];
void mainmenu();
void singleplayer();
void multiplayer();
void gamescreen();
char gamenotover();
void easy();
void medium();
void hard();
void insane();
void singleplayer_instructions();
void multiplayer_instructions();
void singleplayer_instructions(){
	
	for (int i=49;i<=58;i++){
		game[i-49]=i;
	}
	system("cls");
	std::cout<<"\n\t\t\t\tInstructions...";
	std::cout<<"\nSingle Player";
	std::cout<<"\n1.There are 4 difficulty levels in the game arranged in ascending order of difficulty..";
	std::cout<<"\n2.Choices can be made depending upon the location of your assignment , Values ranging from 1-9";
	std::cout<<"\n\t\t\t\t   "<<game[0]<<"| "<<game[1]<<" | "<<game[2];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[3]<<"| "<<game[4]<<" | "<<game[5];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[6]<<"| "<<game[7]<<" | "<<game[8];
	std::cout<<"\n\n\n\nPress any key to continue";
	getch();
}
void multiplayer_instructions(){
	for (int i=49;i<=58;i++){
		game[i-49]=i;
	}
	system("cls");
	std::cout<<"\n\t\t\t\tInstructions...";
	std::cout<<"\n\nMultiplayer";
	std::cout<<"\n1.Upto 4 players can play a game.";
	std::cout<<"\n2.Results are calculated in the best of 3";
	std::cout<<"\n3.Players are allowed to play until eihter of them win in an multiplayer game.";
	std::cout<<"\n4.Choices can be made depending upon the location of your assignment , Values ranging from 1-9.";
	std::cout<<"\n\t\t\t\t   "<<game[0]<<"| "<<game[1]<<" | "<<game[2];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[3]<<"| "<<game[4]<<" | "<<game[5];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[6]<<"| "<<game[7]<<" | "<<game[8];
	std::cout<<"\n\n\n\nPress any key to continue..";
	getch();
}
int common_multiplayer(char a[20],char b[20]){
	for(int i=0;i<=8;i++){
		game[i]=' ';}
	int z=1;
	system("cls");
	std::cout<<"\nThe game is between "<<a<<" & "<<b<<" .Press any key to continue";
	getch();
	int x;
	char status;
	int j=1;
	int one=0,two=0;
  do{
  do{  
     	for(int i=0;i<=8;i++){
		game[i]=' ';}
	 system("cls");
	std::cout<<"\t\t\t\tMulti-Player";
	std::cout<<"\nRound :"<<z;
	gamescreen();
 do {
 	if (j%2!=0){
 		std::cout<<"\n\n"<<a<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='X';
		j++;
		gamescreen();
 			 }
	else if(j%2==0) {
		std::cout<<"\n\n"<<b<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='O';
		j++;
		gamescreen();
		}

		status=gamenotover();
	}while(status=='C');
}while(status=='D');
 if (status=='X'){
 	std::cout<<"\n"<<a<<" Won the game...."<<"\nPress any key to continue";
 	getch();
 	one++;
 	z++;
 }
 else if (status=='O'){
 	std::cout<<"\n"<<b<<" Won the game...."<<"\nPress any key to continue";
 	getch();
 	two++;
 	z++;
 }	
}while(z<=3);
if (one>two){
	std::cout<<"\n\n"<<a<<" Won the match.... Press any key to continue...";
	getch();
	return 1;
	multiplayer();
	}
else 
   std::cout<<"\n\n"<<b<<" Won the match... Press any key to continue...";
   getch();
   return 2;
   multiplayer();	
}
void hard(){
	int x;
    int a=234;
	char status;
	int j=1;
	system("cls");
	std::cout<<"\t\t\t\tSingle Player";
	gamescreen();
 do {
 	if (j%2!=0){
 		std::cout<<"\n\n"<<single_player<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='X';
		j++;
		gamescreen();
 			 }
	else if(j%2==0) {
		std::cout<<"\n\nComputer turn";
	if ((game[0]==game[1])&&(game[0]!=' ')&&(game[2]==' ')){
		game[2]='O';	}
	else if ((game[3]==game[4])&&(game[3]!=' ')&&(game[5]==' ')){
		game[5]='O';	}
	else if ((game[6]==game[7])&&(game[6]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[0]==game[3])&&(game[0]!=' ')&&(game[6]==' ')){
		game[6]='O';	}
	else if ((game[1]==game[4])&&(game[1]!=' ')&&(game[7]==' ')){
		 game[7]='O';	}
	else if ((game[2]==game[5])&&(game[2]!=' ')&&(game[8]==' ')){
		 game[8]='O';	}
	else if ((game[0]==game[4])&&(game[0]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[2]==game[4])&&(game[2]!=' ')&&(game[6]==' ')){
		game[6]='O';	}	
	else if ((game[2]==game[1])&&(game[2]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[6]==game[3])&&(game[6]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[7]==game[4])&&(game[7]!=' ')&&(game[1]==' ')){
		 game[1]='O';	}
	else if ((game[8]==game[5])&&(game[8]!=' ')&&(game[2]==' ')){
		 game[2]='O';	}
	else if ((game[8]==game[4])&&(game[8]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[6]==game[4])&&(game[6]!=' ')&&(game[2]==' ')){
		game[2]='O';	}		
	else if ((game[0]==game[2])&&(game[0]!=' ')&&(game[1]==' ')){
		game[1]='O';	}
	else if ((game[3]==game[5])&&(game[3]!=' ')&&(game[4]==' ')){
		game[4]='O';	}
	else if ((game[6]==game[8])&&(game[6]!=' ')&&(game[7]==' ')){
		game[7]='O';	}
	else if ((game[0]==game[6])&&(game[0]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[1]==game[7])&&(game[1]!=' ')&&(game[4]==' ')){
		 game[4]='O';	}
	else if ((game[2]==game[8])&&(game[2]!=' ')&&(game[5]==' ')){
		 game[5]='O';	}
	
    else
		for (;game[(a%9)]!=' ';){
			a=a+5;
		  }	
		  game[a%9]='O';
		  j++;
		  gamescreen();
		}

		status=gamenotover();
	}while(status=='C');
 if (status=='X'){
 	std::cout<<"\n"<<single_player<<" Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }
 else if (status=='O'){
 	std::cout<<"\nComputer Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }	
 else 
 std::cout<<"\nMatch Draw..."<<"\nPress any key to go back to the previous menu";
 getch();
 singleplayer();
}
void easy(){
int x;
    int a=234;
	char status;
	int j=1;
	system("cls");
	std::cout<<"\t\t\t\tSingle Player";
	gamescreen();
 do {
 	if (j%2!=0){
 		std::cout<<"\n\n"<<single_player<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='X';
		j++;
		gamescreen();
 			 }
	else if(j%2==0) {
		std::cout<<"\n\nComputer turn";
	if ((game[0]==game[1])&&(game[0]!=' ')&&(game[2]==' ')){
		game[2]='O';	}
	else if ((game[3]==game[4])&&(game[3]!=' ')&&(game[5]==' ')){
		game[5]='O';	}
	else if ((game[6]==game[7])&&(game[6]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[0]==game[3])&&(game[0]!=' ')&&(game[6]==' ')){
		game[6]='O';	}
	else if ((game[2]==game[4])&&(game[2]!=' ')&&(game[6]==' ')){
		game[6]='O';	}	
	else if ((game[2]==game[1])&&(game[2]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[5]==game[4])&&(game[5]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[8]==game[5])&&(game[8]!=' ')&&(game[2]==' ')){
		 game[2]='O';	}
	else if ((game[8]==game[4])&&(game[8]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[6]==game[8])&&(game[6]!=' ')&&(game[7]==' ')){
		game[7]='O';	}
	else if ((game[0]==game[6])&&(game[0]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[2]==game[6])&&(game[2]!=' ')&&(game[4]==' ')){
		game[4]='O';	}	
    else
		for (;game[(a%9)]!=' ';){
			a=a+5;
		  }	
		  game[a%9]='O';
		  j++;
		  gamescreen();
		}

		status=gamenotover();
	}while(status=='C');
 if (status=='X'){
 	std::cout<<"\n"<<single_player<<" Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }
 else if (status=='O'){
 	std::cout<<"\nComputer Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }	
 else 
 std::cout<<"\nMatch Draw..."<<"\nPress any key to go back to the previous menu";
 getch();
 singleplayer();
}
void medium(){
	int x;
    int a=235;
	char status;
	int j=1;
	system("cls");
	std::cout<<"\t\t\t\tSingle Player";
	gamescreen();
 do {
 	if (j%2!=0){
 		std::cout<<"\n\n"<<single_player<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='X';
		j++;
		gamescreen();
 			 }
	else if(j%2==0) {
		std::cout<<"\n\nComputer turn";
	if ((game[0]==game[1])&&(game[0]!=' ')&&(game[2]==' ')){
		game[2]='O';	}
	else if ((game[3]==game[4])&&(game[3]!=' ')&&(game[5]==' ')){
		game[5]='O';	}
	else if ((game[6]==game[7])&&(game[6]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[0]==game[3])&&(game[0]!=' ')&&(game[6]==' ')){
		game[6]='O';	}
	else if ((game[1]==game[4])&&(game[1]!=' ')&&(game[7]==' ')){
		 game[7]='O';	}
	else if ((game[2]==game[5])&&(game[2]!=' ')&&(game[8]==' ')){
		 game[8]='O';	}
	else if ((game[0]==game[4])&&(game[0]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[2]==game[4])&&(game[2]!=' ')&&(game[6]==' ')){
		game[6]='O';	}	
	else if ((game[7]==game[4])&&(game[7]!=' ')&&(game[1]==' ')){
		 game[1]='O';	}
	else if ((game[8]==game[5])&&(game[8]!=' ')&&(game[2]==' ')){
		 game[2]='O';	}
	else if ((game[8]==game[4])&&(game[8]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[6]==game[4])&&(game[6]!=' ')&&(game[2]==' ')){
		game[2]='O';	}		
	else if ((game[0]==game[2])&&(game[0]!=' ')&&(game[1]==' ')){
		game[1]='O';	}
	else if ((game[3]==game[5])&&(game[3]!=' ')&&(game[4]==' ')){
		game[4]='O';	}
	else if ((game[6]==game[8])&&(game[6]!=' ')&&(game[7]==' ')){
		game[7]='O';	}
	else if ((game[0]==game[6])&&(game[0]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[1]==game[7])&&(game[1]!=' ')&&(game[4]==' ')){
		 game[4]='O';	}
	else if ((game[2]==game[8])&&(game[2]!=' ')&&(game[5]==' ')){
		 game[5]='O';	}
	else if ((game[0]==game[8])&&(game[0]!=' ')&&(game[4]==' ')){
		game[4]='O';	}
	else if ((game[2]==game[6])&&(game[2]!=' ')&&(game[4]==' ')){
		game[4]='O';	}	
    else
		for (;game[(a%9)]!=' ';){
			a=a+5;
		  }	
		  game[a%9]='O';
		  j++;
		  gamescreen();
		}

		status=gamenotover();
	}while(status=='C');
 if (status=='X'){
 	std::cout<<"\n"<<single_player<<" Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }
 else if (status=='O'){
 	std::cout<<"\nComputer Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }	
 else 
 std::cout<<"\nMatch Draw..."<<"\nPress any key to go back to the previous menu";
 getch();
 singleplayer();
}
void insane(){
	int x;
    int a=23341;
	char status;
	int j=1;
	system("cls");
	std::cout<<"\t\t\t\tSingle Player";
	gamescreen();
 do {
 	if (j%2!=0){
 		std::cout<<"\n\n"<<single_player<<"\'s Turn , Enter choice :";
 		std::cin>>x;
 		for (;x>10||x<1||(game[(x-1)]!=' ');){
 			std::cout<<"Choice Invalid..... Try Again :";
 			std::cin>>x;
		 }
		game[x-1]='X';
		j++;
		gamescreen();
 			 }
	else if(j%2==0) {
		std::cout<<"\n\nComputer turn";
      
      //BugFixes
    	
	  //Attack
	 if ((game[0]==game[1])&&(game[0]!=' ')&&(game[2]==' ')&&(game[0]=='O')){
		game[2]='O';	}
	else if ((game[3]==game[4])&&(game[3]!=' ')&&(game[5]==' ')&&(game[3]=='O')){
		game[5]='O';	}
	else if ((game[6]==game[7])&&(game[6]!=' ')&&(game[8]==' ')&&(game[6]=='O')){
		game[8]='O';	}
	else if ((game[0]==game[3])&&(game[0]!=' ')&&(game[6]==' ')&&(game[0]=='O')){
		game[6]='O';	}
	else if ((game[1]==game[4])&&(game[1]!=' ')&&(game[7]==' ')&&(game[1]=='O')){
		 game[7]='O';	}
	else if ((game[2]==game[5])&&(game[2]!=' ')&&(game[8]==' ')&&(game[2]=='O')){
		 game[8]='O';	}
	else if ((game[0]==game[4])&&(game[0]!=' ')&&(game[8]==' ')&&(game[0]=='O')){
		game[8]='O';	}
	else if ((game[2]==game[4])&&(game[2]!=' ')&&(game[6]==' ')&&(game[2]=='O')){
		game[6]='O';	}	
	else if ((game[2]==game[1])&&(game[2]!=' ')&&(game[0]==' ')&&(game[2]=='O')){
		game[0]='O';	}
	else if ((game[5]==game[4])&&(game[5]!=' ')&&(game[3]==' ')&&(game[5]=='O')){
		game[3]='O';	}
	else if ((game[8]==game[7])&&(game[8]!=' ')&&(game[6]==' ')&&(game[8]=='O')){
		game[6]='O';	}
	else if ((game[6]==game[3])&&(game[6]!=' ')&&(game[0]==' ')&&(game[6]=='O')){
		game[0]='O';	}
	else if ((game[7]==game[4])&&(game[7]!=' ')&&(game[1]==' ')&&(game[7]=='O')){
		 game[1]='O';	}
	else if ((game[8]==game[5])&&(game[8]!=' ')&&(game[2]==' ')&&(game[8]=='O')){
		 game[2]='O';	}
	else if ((game[8]==game[4])&&(game[8]!=' ')&&(game[0]==' ')&&(game[8]=='O')){
		game[0]='O';	}
	else if ((game[6]==game[4])&&(game[6]!=' ')&&(game[2]==' ')&&(game[6]=='O')){
		game[2]='O';	}		
	else if ((game[0]==game[2])&&(game[0]!=' ')&&(game[1]==' ')&&(game[0]=='O')){
		game[1]='O';	}
	else if ((game[3]==game[5])&&(game[3]!=' ')&&(game[4]==' ')&&(game[3]=='O')){
		game[4]='O';	}
	else if ((game[6]==game[8])&&(game[6]!=' ')&&(game[7]==' ')&&(game[6]=='O')){
		game[7]='O';	}
	else if ((game[0]==game[6])&&(game[0]!=' ')&&(game[3]==' ')&&(game[0]=='O')){
		game[3]='O';	}
	else if ((game[1]==game[7])&&(game[1]!=' ')&&(game[4]==' ')&&(game[1]=='O')){
		 game[4]='O';	}
	else if ((game[2]==game[8])&&(game[2]!=' ')&&(game[5]==' ')&&(game[2]=='O')){
		 game[5]='O';	}
	else if ((game[0]==game[8])&&(game[0]!=' ')&&(game[4]==' ')&&(game[0]=='O')){
		game[4]='O';	}
	else if ((game[2]==game[6])&&(game[2]!=' ')&&(game[4]==' ')&&(game[2]=='O')){
		game[4]='O';	}	
 //Special attack
	else if ((game[0]=='X')&&j==2){
		
    		game[8]='O';
		}
	else if ((game[2]=='X')&&j==2){;
			game[6]='O';
		}
	else if((game[6]=='X')&&j==2){
			game[2]='O';
		}
	else if((game[8]=='X')&&j==2){
			game[0]='O';			
		}
 	else if ((game[7]==game[2])&&(game[7]=='X')&&(game[4]=='O')&&j==4){
 		game[8]='O';
	 }
	 else if ((game[5]==game[6])&&(game[5]=='X')&&(game[4]=='O')&&j==4){
 		game[8]='O';
	 }
	 
	else if ((game[4]==game[8])&&(game[4]=='X')&&(game[0]=='O'&&j==4)){
              if (game[2]==' '){
			  game[2]='O';}
			  else if(game[6]==' '){
			  game[6]='O';}
}			 
else if ((game[4]==game[0])&&(game[4]=='X')&&(game[8]=='O'&&j==4)){
              if (game[2]==' '){
			  game[2]='O';}
			  else if(game[6]==' '){
			  game[6]='O';}
}			  
			  
else if ((game[4]==game[2])&&(game[4]=='X')&&(game[6]=='O'&&j==4)){
              if (game[0]==' '){
			  game[0]='O';}
			  else if(game[8]==' '){
			  game[8]='O';}
}			  
			  
else if ((game[4]==game[6])&&(game[4]=='X')&&(game[2]=='O')&&j==4){
              if (game[0]==' '){
			  game[0]='O';}
			  else if(game[8]==' '){
			  game[8]='O';}
}			 
//Defense
	else if ((game[0]==game[1])&&(game[0]!=' ')&&(game[2]==' ')){
		game[2]='O';	}
	else if ((game[3]==game[4])&&(game[3]!=' ')&&(game[5]==' ')){
		game[5]='O';	}
	else if ((game[6]==game[7])&&(game[6]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[0]==game[3])&&(game[0]!=' ')&&(game[6]==' ')){
		game[6]='O';	}
	else if ((game[1]==game[4])&&(game[1]!=' ')&&(game[7]==' ')){
		 game[7]='O';	}
	else if ((game[2]==game[5])&&(game[2]!=' ')&&(game[8]==' ')){
		 game[8]='O';	}
	else if ((game[0]==game[4])&&(game[0]!=' ')&&(game[8]==' ')){
		game[8]='O';	}
	else if ((game[2]==game[4])&&(game[2]!=' ')&&(game[6]==' ')){
		game[6]='O';	}	
	else if ((game[2]==game[1])&&(game[2]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[5]==game[4])&&(game[5]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[8]==game[7])&&(game[8]!=' ')&&(game[6]==' ')){
		game[6]='O';	}
	else if ((game[6]==game[3])&&(game[6]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[7]==game[4])&&(game[7]!=' ')&&(game[1]==' ')){
		 game[1]='O';	}
	else if ((game[8]==game[5])&&(game[8]!=' ')&&(game[2]==' ')){
		 game[2]='O';	}
	else if ((game[8]==game[4])&&(game[8]!=' ')&&(game[0]==' ')){
		game[0]='O';	}
	else if ((game[6]==game[4])&&(game[6]!=' ')&&(game[2]==' ')){
		game[2]='O';	}		
	else if ((game[0]==game[2])&&(game[0]!=' ')&&(game[1]==' ')){
		game[1]='O';	}
	else if ((game[3]==game[5])&&(game[3]!=' ')&&(game[4]==' ')){
		game[4]='O';	}
	else if ((game[6]==game[8])&&(game[6]!=' ')&&(game[7]==' ')){
		game[7]='O';	}
	else if ((game[0]==game[6])&&(game[0]!=' ')&&(game[3]==' ')){
		game[3]='O';	}
	else if ((game[1]==game[7])&&(game[1]!=' ')&&(game[4]==' ')){
		 game[4]='O';	}
	else if ((game[2]==game[8])&&(game[2]!=' ')&&(game[5]==' ')){
		 game[5]='O';	}
	else if ((game[0]==game[8])&&(game[0]!=' ')&&(game[4]==' ')){
		game[4]='O';	}
	else if ((game[2]==game[6])&&(game[2]!=' ')&&(game[4]==' ')){
		game[4]='O';	}	
  
	else {
		for (;game[(a%9)]!=' ';){
			a=a+5;
		  }	
		  game[a%9]='O';
	}
	j++;
	gamescreen();
		}

		status=gamenotover();
	}while(status=='C');
 if (status=='X'){
 	std::cout<<"\n"<<single_player<<" Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }
 else if (status=='O'){
 	std::cout<<"\nComputer Won the game...."<<"\nPress any key to go back to the previous menu";
 	getch();
 	singleplayer();
 }	
 else 
 std::cout<<"\nMatch Draw..."<<"\nPress any key to go back to the previous menu";
 getch();
 singleplayer();
}
char gamenotover(){
	
	if ((game[0]==game[1])&&(game[1]==game[2])&&(game[0]!=' ')){
		return game[0];	}
	else if ((game[3]==game[4])&&(game[4]==game[5])&&(game[3]!=' ')){
		return game[3];	}
	else if ((game[6]==game[7])&&(game[7]==game[8])&&(game[6]!=' ')){
		return game[6];	}
	else if ((game[0]==game[3])&&(game[3]==game[6])&&(game[0]!=' ')){
		return game[0];	}
	else if ((game[1]==game[4])&&(game[4]==game[7])&&(game[1]!=' ')){
		return game[1];	}
	else if ((game[2]==game[5])&&(game[5]==game[8])&&(game[2]!=' ')){
		return game[2];	}
	else if ((game[0]==game[4])&&(game[4]==game[8])&&(game[0]!=' ')){
		return game[0];	}
	else if ((game[2]==game[4])&(game[4]==game[6])&&(game[2]!=' ')){
		return game[2];	}
	else if (game[0]!=' '&&game[1]!=' '&&game[2]!=' '&&game[3]!=' '&&game[4]!=' '&&game[5]!=' '&&game[6]!=' '&&game[7]!=' '&&game[8]!=' '){
		return 'D';
	}
	else 
	return 'C';							
}
void gamescreen(){
std::cout<<"\n\n\n";
std::cout<<"\n\t\t\t\t   "<<game[0]<<"| "<<game[1]<<" |"<<game[2];
std::cout<<"\n\t\t\t\t  ---------";
std::cout<<"\n\t\t\t\t   "<<game[3]<<"| "<<game[4]<<" |"<<game[5];
std::cout<<"\n\t\t\t\t  ---------";
std::cout<<"\n\t\t\t\t   "<<game[6]<<"| "<<game[7]<<" |"<<game[8];
}
void singleplayer(){
	system("cls");
	for(int i=0;i<=8;i++){
		game[i]=' ';}
	char singleplayer_choice;	
	std::cout<<"\t\t\t\tSingle Player";
	std::cout<<"\n\nChoose Difficulty";
	std::cout<<"\n1.Easy";
	std::cout<<"\n2.Medium";
	std::cout<<"\n3.Hard";
	std::cout<<"\n4.Insane";
	std::cout<<"\n\nFor Instructions on how to play check main menu";
	std::cout<<"\n\n\nPress any other key to go back to main menu";
	std::cout<<"\nEnter your choice :";
	std::cin>>singleplayer_choice;
	switch(singleplayer_choice){
	
	case 49: easy();
			break;
	case 50: medium();
			break;
	case 51: hard();
			break;
	case 52: insane();
			break;
	default :mainmenu();	    
		
	}
}
void multiplayer(){
		for(int i=0;i<=8;i++){
		game[i]=' ';}
	system("cls");
	char multiplayer_choice;
	int qualified,qualifiers_one,qualifiers_two;
	char player_one[20],player_two[20],player_three[20],player_four[20];
 std::cout<<"\n\t\t\t\tMultiplayer";
 std::cout<<"\n1.2-Players";
 std::cout<<"\n2.3-Players";
 std::cout<<"\n3.4-Players" ;
 std::cout<<"\n\nFor Instructions on how to play check main menu";
 std::cout<<"\n\n\nEnter any other key to go back to main menu";
 std::cout<<"\nEnter your choice :"	;
 multiplayer_choice=getche();getch();
 switch(multiplayer_choice){
 	case 49: std::cout<<"\nEnter player one name :";
 			gets(player_one);
 			std::cout<<"\nEnter player two name :";
 			gets(player_two);
	 		common_multiplayer(player_one,player_two);
	 		multiplayer();
	        break;
 	case 50: std::cout<<"\nEnter player one name :";
	 		gets(player_one);
			 std::cout<<"\nEnter player two name :";
			 gets(player_two);
			 std::cout<<"\nEnter player three name :";
			 gets(player_three);
			 qualified=common_multiplayer(player_one,player_two);      
 			 if (qualified==1){
 			 	qualified=common_multiplayer(player_two,player_three);
 			 	if (qualified==1){
 			 		common_multiplayer(player_one,player_two);
 			 		multiplayer();
				  }
				else {
					common_multiplayer(player_one,player_three);
					multiplayer();
				}
			  }
 			 else {
 			 	qualified=common_multiplayer(player_one,player_three);
 			 	if (qualified==1){
 			 		common_multiplayer(player_two,player_one);
 			 		multiplayer();
				  }
				else {
					common_multiplayer(player_two,player_three);
					multiplayer();
				}
			  }
			  multiplayer();
			  break;
	case 51:	std::cout<<"\nEnter player one name :";
	 		gets(player_one);
			std::cout<<"\nEnter player two name :";
			gets(player_two);
			std::cout<<"\nEnter player three name :";
			gets(player_three);
			std::cout<<"\nEnter player four name :";
			gets(player_four);
			qualifiers_one=common_multiplayer(player_one,player_two);
			qualifiers_two=common_multiplayer(player_three,player_four);
			if (qualifiers_one==1){
			 	if (qualifiers_two==1){
			 		common_multiplayer(player_one,player_three);
				 }
				else
				   common_multiplayer(player_one,player_four); 	
			}
			else {
				if (qualifiers_two==1){
			 		common_multiplayer(player_two,player_three);
				 }
				else
				   common_multiplayer(player_two,player_four); 	
			}
			multiplayer();
			break;
	default : mainmenu();
			
			}		  
 }
void credits(){
	system("cls");
	std::cout<<"\n\t\t\t\tCredits";
	std::cout<<"\n1.Ajay K.R.";
	std::cout<<"\n2.Aswin kumar.R";
	std::cout<<"\n3.Predeep.B";
	std::cout<<"\n4.Sarvesh.N";
	std::cout<<"\n\nPress any key to go back to main menu";
	getch();
	mainmenu();
	}
void instructions() {
	for (int i=49;i<=57;i++){
		game[i-49]=i;
	}
	system("cls");
	std::cout<<"\n\t\t\t\tInstructions...";
	std::cout<<"\nSingle Player";
	std::cout<<"\n1.There are 4 difficulty levels in the game arranged in ascending order of difficulty..";
	std::cout<<"\n2.Choices can be made depending upon the location of your assignment , Values ranging from 1-9";
	std::cout<<"\n\t\t\t\t   "<<game[0]<<"| "<<game[1]<<" | "<<game[2];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[3]<<"| "<<game[4]<<" | "<<game[5];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[6]<<"| "<<game[7]<<" | "<<game[8];
	std::cout<<"\n\nMultiplayer";
	std::cout<<"\n1.Upto 4 players can play a game.";
	std::cout<<"\n2.Players are allowed to play until eihter of them win in an multiplayer game.";
	std::cout<<"\n3.Choices can be made depending upon the location of your assignment , Values ranging from 1-9.";
	std::cout<<"\n\t\t\t\t   "<<game[0]<<"| "<<game[1]<<" | "<<game[2];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[3]<<"| "<<game[4]<<" | "<<game[5];
	std::cout<<"\n\t\t\t\t  ---------";
	std::cout<<"\n\t\t\t\t   "<<game[6]<<"| "<<game[7]<<" | "<<game[8];
	std::cout<<"\n\n\n\nPress any key to go back to main menu";
	getch();
	mainmenu();
}
void tictactoe(){
	std::cout<<"\n _______";std::cout<<" _______";std::cout<<" _______";std::cout<<"   ";std::cout<<"_______";std::cout<<" _______  ";std::cout<<" _______";std::cout<<"   ";std::cout<<"_______";std::cout<<" _______";std::cout<<" _______";
	std::cout<<"\n    |   ";std::cout<<"    |   ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |  ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |";std::cout<<" |      ";
	std::cout<<"\n    |   ";std::cout<<"    |   ";std::cout<<" |      ";std::cout<<"___";std::cout<<"   |   ";std::cout<<" |     |  ";std::cout<<" |      ";std::cout<<"___";std::cout<<"   |   ";std::cout<<" |     |";std::cout<<" |      ";
	std::cout<<"\n    |   ";std::cout<<"    |   ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |_____|  ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |";std::cout<<" |------";
	std::cout<<"\n    |   ";std::cout<<"    |   ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |  ";std::cout<<" |      ";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |";std::cout<<" |      ";
	std::cout<<"\n    |   ";std::cout<<" ___|___";std::cout<<" |______";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |     |  ";std::cout<<" |______";std::cout<<"   ";std::cout<<"   |   ";std::cout<<" |_____|";std::cout<<" |______";
	std::cout<<"\n\n";
}
void mainmenu(){
	char choice;
	char loop;
	do{
    system("cls");
	tictactoe();
	std::cout<<"\n1.Single Player";
	std::cout<<"\n2.Mutiplayer";
	std::cout<<"\n3.Credits";
	std::cout<<"\n4.Instruction";
	std::cout<<"\n5.Quit";
	std::cout<<"\nEnter your choice : ";
	choice=getche();getch();
	switch(choice){
		case 49:std::cout<<"\nEnter your name :";
				gets(single_player);
				singleplayer_instructions();
				singleplayer();
	            break;
	    case 50:multiplayer_instructions();
				multiplayer();
	           break;
	    case 51:credits();
	           break;
	    case 52:instructions();
	            break;
	    case 53:std::cout<<"\nTerminating..........";
		        exit(0);
	            break;
	    default :std::cout<<"Wrong Choice..... \nPress $ to try again.......or any other key to exit... ";
	              loop=getch();
					break;
	}
}while (loop =='$');
}
int main(){
	system("cls");
	std::cout<<"\nGame Initializing........";
	mainmenu();
getch();
return 0;
}
