#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;

    if(n%2!=0)
    {   int cnt=0;
        for(int i=1; i<=n; i+=3)
        {
            cnt++;
        }
        cout<<n-cnt<<endl;
    }
    else{

        cout<<n<<endl;
    }

    return 0;
}