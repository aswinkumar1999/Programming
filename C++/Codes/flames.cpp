#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int totalchar=0,d,e,x,count2;
char name1[20],name2[20];
void totalcharacter(){
	for (int a=0;name1[a]!='\0';a++){
		for(int b=0;name2[b]!='\0';b++){
			if (name1[a]==name2[b]){
				totalchar=totalchar-2;
				name1[a]='$';
				name2[b]='@';
			}
		}
		
}
}
 int main(){
 	int start=0;
 	int flames[6];
 	cout<<"\t\t\t\t\tFLAMES\nEnter person 1 name(In small letters,no initial,no spaces) :";
 	gets(name1);
 	cout<<"Enter person 2 name(In small letters,no initial,no spaces) :";
 	gets(name2);
 	for (int a=0;name1[a]!='\0';a++){
 		totalchar++;
	 }
 	for (int a=0;name2[a]!='\0';a++){
 		totalchar++;
	 }
	 for (int c=0;c<6;c++){
		flames[c]=1;
	}
	totalcharacter();
 		for (int count=0;count<5;){	
	for (int b=0;b<totalchar;){
			start=start%6;
		if (flames[start]==1){
			b++;
		}
		start++;
		}
	flames[start-1]=0;	
	count=count+1;
	}
	for (e=0;flames[e]==0;e++){
	} 
	switch(e){
		case 0:cout<<"\nResult : Friends";
				break;
		case 1:cout<<"\nResult :Lovers";
				break;
		case 2:cout<<"\nResult :nAffection";
				break;
		case 3:cout<<"\nResult :Marriage";
				break;
		case 4:cout<<"\nResult :Enemy";
				break;
		case 5:cout<<"\nResult :Sister";
				break;
}
	
 	return 0;
 }
