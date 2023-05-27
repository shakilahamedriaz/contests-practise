#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b;
    cin >> a >> b;
    if(a==b){

        cout<< "0" <<endl;
    }
    else if( (b/2)==a){

         cout<< a <<endl;
    }
    else if(a<(b/2)){

        cout<< a <<endl;
    }
    else if(a>(b/2)){

        cout<<b-a<<endl;
    }

    return 0;
}