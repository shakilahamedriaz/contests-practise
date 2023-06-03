#include<bits/stdc++.h>
using namespace std;

void printnLine(int n)
{   
    int bou=1;
    for(int i=1; i<=n; i++)
    {     
       for(int j=1; j<=i; j++)
       {
              cout<<bou<<" ";
              bou+=1;
              
       }
          cout<<endl;
    }
}

int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    printnLine(n);

    return 0;
}