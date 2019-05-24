#include<bits/stdc++.h>
#define columns 100
#define rows 40
using namespace std;
void main_screen();
void start_game();
short int pixel[rows][columns];
void clean_pixels();
void draw_border();
void print_board();
void print_board(){
  cout << "\033[2J\033[1;1H";
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      if(pixel[i][j]==-1){
        cout<<"=";
      }
      else if (pixel[i][j] > 0){
        cout<<"*";
      }
      else
        cout<<" ";
    }
    cout<<"\n";
  }
}
void clean_pixels(){
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      pixel[i][j]=0;
    }
  }
}
void draw_border(){
  for(int i=0;i<rows;i++){
    pixel[i][0]=-1;
    pixel[i][columns-1]=-1;
  }
  for(int i=0;i<columns;i++){
    pixel[0][i]=-1;
    pixel[rows-1][i]=-1;
  }
}
void start_game(){
  clean_pixels();
  draw_border();
  print_board();
}

void main_screen(){
  char option;
  cout<<"\t\t\tSnake Game:";
  cout<<"\n1.Start Game";
  cin>>option;
  switch(option){
    case '1':start_game();
              break;
    Default : break;
  }
}
int main(){
  main_screen();
  return 0;
}
