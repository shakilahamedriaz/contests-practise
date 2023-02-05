#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
#define ll long long
int main()
{
    int n, len, i;
    ll ans=1;
    string s;
    cin >> n;
    cin >> s;
    len = s.length();
    for(i=n ; i>0 ; i =(i-len))
    {
        ans = (ans*i);
    }
    cout << ans << endl;
}
