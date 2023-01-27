#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        ll last=s-r;
        ll rem=(r%(n-1));
        ll mid=(r/(n-1));


        for(ll i=1; i<n; i++)
        if(rem>0){

            cout<<mid+1<< " ";
            rem--;
        }else{

          cout<<mid<< " ";
        }

          cout<<last<<endl;
    }
    return 0;
}
