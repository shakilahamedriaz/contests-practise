#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t,cnt=1; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;

         if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (c*c + b*b == a*a) )
         {
             cout<< "Case "<<cnt++<< ": "<<"yes"<<endl;
         }
         else
         cout<<"Case "<<cnt++<< ": "<<"no"<<endl;



    }





    return 0;
}

