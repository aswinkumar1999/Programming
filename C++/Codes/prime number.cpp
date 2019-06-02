#include <iostream>
using namespace std;

int main(){
long long a;
cin>>a;
for (int d=3 ;d<=a ;d++){
if (d%2!=0){
for (int c=2;c<=(d/2)+1; c++){
if (d%c==0){
	break;
} 
else {
	cout<<d;
}
}

}
cout<<"\n";	
}	
	return 0;
}
