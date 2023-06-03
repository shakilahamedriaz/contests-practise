#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    cin>> s;
    int len= s.length();
    int cnt=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a' && s[i+1]=='b'){

            cnt++;
        }
    
    }
    cout<< cnt<<endl;

    return 0;
}