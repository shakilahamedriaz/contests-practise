#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

      ios_base::sync_with_stdio(false);
      cin.tie(0); cout.tie(0);

      ll t; cin>>t;

      while(t--)
      {
          ll n;
          cin>>n;

          string s;
          cin>>s;

          ll x=0, y=0;

          for(auto i : s){

            if(i== 'U') y++;
            else if(i== 'L') x--;
            else if(i== 'D') y--;
            else if(i== 'R') x++;

            if(x==1 && y==1)
            {
                cout<< "YES" <<endl;
                return 0;
            }


          }
          cout<< "NO"<<endl;
      }






    return 0;
}




