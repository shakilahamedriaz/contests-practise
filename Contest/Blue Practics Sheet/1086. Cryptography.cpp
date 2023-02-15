#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;


const int n=1000000;
bool prime[1000001];
vector<int>v;

void sieve()
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false) v.push_back(i);

    }

}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

   sieve();

   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    cout<<v[n-1]<<endl;
   }

return 0;
}
