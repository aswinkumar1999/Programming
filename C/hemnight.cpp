#include<iostream>
#include<stdlib.h>
using namespace std;


int board[8][8];
int moves[8][8][8];
int unmove[8][8];
int step=2;
int i=0,j=0,c=0;

void print()
{
 for(int u=0;u<8;++u)
 {for(int v=0;v<8;++v)
  cout<<board[u][v]<<"  ";
  cout<<"\n";}
}

bool move(int x,int y)
{
 if((((x+2)<8)&&(y+1)<8)&&(board[x+2][y+1]==0))
 {if(moves[x][y][0]==0)
  {i=x+2; j=y+1;
  unmove[i][j]=0;

  moves[x][y][0]=1;
  return true;}}
 else
 moves[x][y][0]=-1;

 if((((x+1)<8)&&(y+2)<8)&&(board[x+1][y+2]==0))
 {if(moves[x][y][1]==0)

  {moves[x][y][1]=1;
  i=x+1; j=y+2;
  unmove[i][j]=1;
  return true;}}
 else
 moves[x][y][1]=-1;

 if((((x-2)>=0)&&(y+1)<8)&&(board[x-2][y+1]==0))
 {if(moves[x][y][2]==0)
  {moves[x][y][2]=1;
  i=x-2; j=y+1;
  unmove[i][j]=2;

  return true;}}
 else
 moves[x][y][2]=-1;

 if((((x-1)>=0)&&(y+2)<8)&&(board[x-1][y+2]==0))
 {if(moves[x][y][3]==0)

  {moves[x][y][3]=1;
  i=x-1; j=y+2;
  unmove[i][j]=3;
  return true;}}
 else
 moves[x][y][3]=-1;

 if((((x+2)<8)&&(y-1)>=0)&&(board[x+2][y-1]==0))
 {if(moves[x][y][4]==0)

  {moves[x][y][4]=1;
  i=x+2; j=y-1;
  unmove[i][j]=4;
  return true;}}
 else
 moves[x][y][4]=-1;

 if((((x+1)<8)&&(y-2)>=0)&&(board[x+1][y-2]==0))
 {if(moves[x][y][5]==0)
  {moves[x][y][5]=1;
  i=x+1; j=y-2;
  unmove[i][j]=5;
  return true;}}
 else
 moves[x][y][5]=-1;

 if((((x-2)>=0)&&(y-1)>=0)&&(board[x-2][y-1]==0))
 {if(moves[x][y][6]==0)

  {moves[x][y][6]=1;
  i=x-2; j=y-1;
  unmove[i][j]=6;
  return true;}}
 else
 moves[x][y][6]=-1;

 if((((x-1)>=0)&&(y-2)>=0)&&(board[x-1][y-2]==0))
 {if(moves[x][y][7]==0)

  {moves[x][y][7]=1;
  i=x-1; j=y-2;
  unmove[i][j]=7;
  return true;}}
 else
 moves[x][y][7]=-1;

 return false;
}

int undo(int x,int y)
{
if(unmove[x][y]==0)
 {i=i-2; j=j-1;
  unmove[x][y]=-1;
  return 0;}
if(unmove[x][y]==1)
 {i=i-1; j=j-2;
  unmove[x][y]=-1;
  return 1;}
if(unmove[x][y]==2)
 {i=i+2; j=j-1;
  unmove[x][y]=-1;
  return 2;}
if(unmove[x][y]==3)
 {i=i+1; j=j-2;
  unmove[x][y]=-1;
  return 3;}
if(unmove[x][y]==4)
 {i=i-2; j=j+1;
  unmove[x][y]=-1;
  return 4;}
if(unmove[x][y]==5)
 {i=i-1; j=j+2;
  unmove[x][y]=-1;
  return 5;}
if(unmove[x][y]==6)
 {i=i+2; j=j+1;
  unmove[x][y]=-1;
  return 6;}
if(unmove[x][y]==7)
 {i=i+1; j=j+2;
  unmove[x][y]=-1;
  return 7;}
}


void back()
{
 cout<<step<<"( "<<i<<" , "<<j<<" ) "<<moves[1][1][3]<<"\n";
 print();  c++;

if(c>70)
exit(0);

 if(step<1)

 {cout<<"Not possible\n";
  exit(0);}

 if(step==65)
 {cout<<"Possible\n";
  exit(0);}


 if(move(i,j))
 {board[i][j]=step;
  step++;
  back();}
 else
 {board[i][j]=0;
  //print();
  c++;
  //if(c>6)
  //exit(0);
  for(int u=0;u<8;++u)
  moves[i][j][u]=0;
  step--;
  int t=undo(i,j);
  moves[i][j][t]=-1;
  back();}
}


int main()
{
 for(int u=0;u<8;++u)
 for(int v=0;v<8;++v)
 {board[u][v]=0; unmove[u][v]=-1;}
 board[0][0]=1;
 for(int u=0;u<8;++u)
 for(int v=0;v<8;++v)
 for(int w=0;w<8;++w)
 moves[u][v][w]=0;
 back();
 return(0);
}
