#include<iostream>
#include<conio.h>
using namespace std;

class vehicle{
	public :
			vehicle(){
				cout<<"\nVehicle Constructor";
			}
			~vehicle(){
				cout<<"\nVehicle destructor";
			}
};
class automobile {
		public :
			automobile(){
				cout<<"\nautomobile Constructor";
			}
			~automobile(){
				cout<<"\nautomobile destructor";
			}
};
class car : public automobile,public vehicle {
		public :
			car(){
				cout<<"\ncar Constructor";
			}
			~car(){
				cout<<"\ncar destructor";
			}
};

int main(){
	car obj;	
	
	
	
	
	return 0;
}
