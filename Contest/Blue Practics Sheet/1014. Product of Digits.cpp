#include<bits/stdc++.h>
using namespace std;

int main(){


int n;
cin>>n;


int i=1;
   for(int j=1; j<n; j++){

      if((i*j)==n){
       
       cout<<i<<j<<endl;
            break;
    
      }
      i++;
   }




    return 0;
}