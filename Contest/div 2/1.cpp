#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

void thesolve()
{
    ll n; cin>>n;
    vector<ll>v(n);

    ll cnt=0;

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)  cnt ++;
    }
    ll aa= n-cnt+cnt/2;

    if(cnt%2 !=0) aa++;

    cout<<aa<<endl;


}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        thesolve();
    }



    return 0;
}
