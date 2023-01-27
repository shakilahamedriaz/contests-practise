#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

    int main(){
    int t;
    cin>>t;

    while(t--){
    ll n,ans=0;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++)
    {
        if(a[i]==0) continue;
        if(i<n && a[i]==1)

            a[i+1]--;

               ans++;
    }

    cout<<ans<<endl;

    }


    return 0;
}

