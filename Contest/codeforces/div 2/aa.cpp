#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pp push_back
#define forn(i,x,n) for(int i=x; i<n; i++)

void solve()
{
    ll n;
    cin>>n;
    int arr[n];

    unordered_map<int,int> a;
    forn(i,0,n);
    cin>>arr[i];
    a[arr[i]]++;

}

int bb= a[1];

if(bb%2 !=0)
{
    cout<<bb/2+n-bb+1<<endl;
}
else{

    cout<<bb/2+n-bb<<endl;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        solve();
    }

    return 0;
}
