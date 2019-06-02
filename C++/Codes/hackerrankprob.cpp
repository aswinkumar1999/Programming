#include <bits/stdc++.h>

using namespace std;

// Complete the kangaroo function below.
string kangaroo(double x1, double v1, double x2, double v2) {
    if((v2>v1)&&(x2>x1)){
        return "NO";
    }
    if((x1!=x2)&&(v1==v2)){
    	return "NO";
	}
    double fractx,intpart,val;
    val=(x2-x1)/(v1-v2);
    fractx = modf (val,&intpart);
    if(fractx>0){
        return "NO";
    }
    return "YES";
}

int main()
{
    double x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
	double fractx,intpart,val;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << "\n";


    return 0;
}

