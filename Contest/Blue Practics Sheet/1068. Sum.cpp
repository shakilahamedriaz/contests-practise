#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin>>n;

    if(n<1){

        int sum=0;
        for(int i=n; i<=1; i++)
        {
            sum+=i;
        }

        cout<<sum<<endl;
    }
    else{

        int sum=0;

        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }

        cout<<sum<<endl;
    }


    return 0;
}
