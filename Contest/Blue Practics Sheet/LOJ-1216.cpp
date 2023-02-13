#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main(){


double pi,r3;
int t,r1,r2,h,p;  cin>>t;
pi = 2.0*acos(0.0);
int i=1;
while(t--){

cin>>r1>>r2>>h>>p;

r3= p/(h*1.0)*(r1-r2)+r2;
double ans= (pi / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2));


cout<< "Case "<<i<< ": "<<fixed<<setprecision(9)<<ans<<endl;
i++;


  }

    return 0;
}











