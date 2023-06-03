#include<bits/stdc++.h>
using namespace std;

void hornyMath(long long int  n, long int k)
{
    if(k==0)
    {
        cout<< "-1"<<endl;
    }
    else if(n==0)
    {
        cout<< "0" <<endl;
    }
    else{
        long long int uhuu=n/k;
        if(n%k==0){
          uhuu++;
        }
        cout<<uhuu<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        hornyMath(n, k);
    }

    return 0;
}