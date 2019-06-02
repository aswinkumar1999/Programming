//stack
#include<bits/stdc++.h>
using namespace std;
class stack{
	public:
			int arr[5],index,n;
			void push(int item){
				if(index==n-1){
					cout<<"\nOverflow";
				}
				else
					index++;
					arr[index]=item;
			}
			int pop(){
				if(index==-1){
					cout<<"\nUnderflow";
					return -1;
				}
				else 
					index--;
				return 	arr[index+1];
			}
			void display(){
				cout<<"\nThe Stack now is :";
				for(int j=0;j<=index;j++){
					cout<<arr[j]<<" ";
				}
			}
}obj;

int main(){
	obj.n=5;
	obj.index=-1;
	int ch,item;
	while(1){
		cout<<"\nMainMenu\n--------------------\n1.Push\n2.Pop\n3.Exit\nEnter your choice :";
		cin>>ch;
		switch(ch){
			case 1 : cout<<"\nEnter the element to be pushed :";
					 cin>>item;
					 obj.push(item);
					 obj.display();
					 break;
			case 2 : item=obj.pop();
					 if(item!=-1){
					 	cout<<"\nThe deleted element is :";
					 	cout<<item;
					 	obj.display();
					 }
					  break;
			case 3 : cout<<"\nExiting ...";
						exit(0);					 	
					
					 
		}
	}
	
}
