#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int digit= s.length();

   if(digit%2==1){
      cout<< s[digit/2] <<endl;
   }
   else{
       cout<< s[digit/2-1]<< " ";
       cout<<s[digit/2]<<endl;
   }

   return 0;
}