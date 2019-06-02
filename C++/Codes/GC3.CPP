#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<iomanip.h>

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void shuffle(int a[5][5])
{
	for(int i = 1; i <= 100; i++) swap(a[rand()%5][rand()%5], a[rand()%5][rand()%5]);
}

int check(int a[5][5], const int b[5][5])
{
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			if(a[i][j] != b[i][j]) return 0;
	return 1;
}

void gameswap(int a[5][5], int x, int y)
{
	int flag = 0, x1, x2, y1, y2;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			if(a[i][j] == x)
			{
				x1 = i;
				y1 = j;
				flag = 1;
				break;
			}
		if(flag == 1) break;
	}
	flag = 0;
	for(i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			if(a[i][j] == y)
			{
				x2 = i;
				y2 = j;
				flag = 1;
				break;
			}
		if(flag == 1) break;
	}
	swap(a[x1][y1], a[x2][y2]);
}

void display(int a[5][5])
{
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++) cout << setw(4) << a[i][j];
		cout << endl << endl;
	}
}

void main()
{
	clrscr();
	time_t t;
	int x, y;
	const int checkref[5][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	int grid[5][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	srand((unsigned)time(&t));
	shuffle(grid);
	int i = 0;
	int *gr = &grid[0][0];
	do
	{
		display(grid);
		if(*(gr+i) != i+1)
		{
			gameswap(grid, i+1, *(gr+i));
			delay(500);
		}
		i++;
		clrscr();
	}while(check(grid, checkref) == 0);
	display(grid);
	cout << endl << "\tWELL DONE!!!";
	getch();
}