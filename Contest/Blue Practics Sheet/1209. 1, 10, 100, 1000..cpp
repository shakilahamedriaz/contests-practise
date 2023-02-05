#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string s= "110100100010000";

    while(t--)
    {
        int n;
        cin>>n;

        cout<<s[n-1]<<" "<<endl;
    }


    return 0;
}
