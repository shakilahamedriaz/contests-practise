#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  t,cnt=1;
    cin>>t;
    while(t--){

         int sum=0;
        int n;cin>>n;


        while(n--)
        {
            int number;
            cin>>number;
            if(number>0)
                sum+=number;
        }

        cout<< "Case "<<cnt++<< ": "<<sum<<endl;

    }





    return 0;
}
