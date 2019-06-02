#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
struct customer{
	char name[50];
	float balance;
};
int main(){
	system("cls");
	int lines=0;char line[81];
	fstream file;
	file.open("textfile.txt",ios::out|ios::app|ios::binary);
	customer savac,savac2;
	strcpy(savac.name,"\nR.Aswinkumar\n");
	savac.balance=99999.99;
	file.write((char *) &savac,sizeof(savac));	
	file.close();
	fstream get;
	get.open("textfile.txt",ios::in|ios::binary);
	get.seekg(-9,ios::end);
	while(get.getline(line,80)){
		++lines;
	}
	cout<<lines;
	//get.read((char *) & savac2,sizeof(savac));
	//cout<<savac2.name<<savac2.balance;
	return 0;
	
}
