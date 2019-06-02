#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x,y;
    double size;
     cin>>size;
     char a='#';
    
    for (x=0;x<size;x++)
    {
    	for(int i=0;i<=40-(size*2);i++){
    		cout<<" ";
		}
        for (y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );

            if (dist1 < size + 0.5 || dist2 < size + 0.5 )
            cout<<a;
            else
            cout<<" ";


        }
        cout<<endl;

    }

    for ( x=1;x<2*size;x++)
    {
    		for(int i=0;i<=40-(size*2);i++){
    		cout<<" ";
		}
        for(y=0;y<x;y++)
        cout<<" ";

        for (y=0; y<4*size + 1 - 2*x; y++)
        cout<<a;

        cout<<endl;
    }

    system("PAUSE");
}
