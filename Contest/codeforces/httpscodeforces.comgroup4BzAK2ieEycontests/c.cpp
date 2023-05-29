#include <bits/stdc++.h>
using namespace std;



void ans(string s){

    int len= s.length();

    if(s[len-1]=='a'){

        cout<< "Alice" <<endl;
    }
    else if(s[len-1]=='b'){

        cout<< "Bob" <<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ans(s);
    }
    
    return 0;
}