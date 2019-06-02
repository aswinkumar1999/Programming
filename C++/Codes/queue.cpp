//queue
#include<bits/stdc++.h>
using namespace std;
class stack{
	public:
			int arr[5],n,f,r;
			void rear(int item){
				if(r==n-1&&f<=r){
					cout<<"\nOverflow";
				}
				else if(r==n-1){
					f=0;
					r=0;
					arr[r]=item;
				}
				else {
					r++;
					arr[r]=item;
				}
}
			int front(){
				if(f==r+1){
					cout<<"\nUnderflow";
					return -1;
				}
				else 
					f++;
				return 	arr[f-1];
			}
			void display(){
				cout<<"\nThe Queue now is :";
				for(int j=f;j<=r;j++){
					cout<<arr[j]<<" ";
				}
			}
}obj;

int main(){
	obj.n=5;
	obj.r=-1;
	obj.f=0;
	int ch,item;
	while(1){
		cout<<"\nMainMenu\n--------------------\n1.Rear\n2.Front\n3.Exit\nEnter your choice :";
		cin>>ch;
		switch(ch){
			case 1 : cout<<"\nEnter the element to be pushed :";
					 cin>>item;
					 obj.rear(item);
					 obj.display();
					 break;
			case 2 : item=obj.front();
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
