#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{

    int  myposi,liftposi,t,nthcase=1;
    cin>>t;

    while(t--){

          cin>>myposi>>liftposi;

        int enter=5;
        int exit=5;
        int open=3;
        int close=3;
        int reachme= abs(myposi-liftposi)*4;
        int reachGround= myposi*4;

        int ans= enter+exit+open+close+reachme+reachGround;


        cout<< "Case "<<nthcase<< ": "<<ans<<endl;

        nthcase++;
    }





    return 0;
}
