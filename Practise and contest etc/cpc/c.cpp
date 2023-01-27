#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   if(n%3==0 && (n/3)>0){

    cout<< "Equilateral"<<endl;

   }

   else if(n%3 !=0 && (n/3)*3 ==n){

     cout<< "Isosceles"<<endl;
   }
   else{
      cout<< "Invalid"<<endl;
   }


return 0;
}

