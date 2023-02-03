#include<bits/stdc++.h>
using namespace std;



int main() {


     ios_base::sync_with_stdio(false);
     cin.tie(0); cout.tie(0);


    int t;
    char c;
    string p = "codeforces";


    cin >> t;
    while (t--) {
        cin >> c;
        if (p.find(c) != string::npos) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
