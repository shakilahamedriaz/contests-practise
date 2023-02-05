#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t,s,a; cin>>t;
    while(t--)
    {
        double a,b,c; cin>>a>>b>>c;

        s=(a+b+c)/2;
        a=sqrt(s*(s-a)*(s-b)*(s-c));



      double q1,q2,q3;

      q1=asin((2.0*a)/(a*b));
      q2=asin((2.0*a)/(a*c));

      cout<<q1<<endl;
      cout<<q2<<endl;


    }





    return 0;
}
