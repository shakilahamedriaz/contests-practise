#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t,i=1;
    cin>>t;

    while(t--)
    {

    double pi= 2.0* acos(0.0);
    double r,S_area,C_area,rs;
    cin>>r;

     S_area=pow((r+r),2);
     rs=pow(r,2);
     C_area= (2*(pi/2)*rs);

     cout<<"Case "<<i++<<": "<<fixed<<setprecision(2)<<S_area-C_area<<endl;

    }


    return 0;
}
