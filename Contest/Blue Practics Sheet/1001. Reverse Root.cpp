#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t; cin>>t;
    vector<double>a;

    double n;

    while(cin>>n) a.push_back(n);


      for(int i=a.size()-1; i>=0; i--)

          cout<<fixed<<setprecision(4)<<sqrt(a[i])<<endl;






    return 0;
}
