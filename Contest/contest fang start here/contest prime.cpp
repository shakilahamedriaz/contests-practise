#include<bits/stdc++.h>
#include<cmath>
using namespace std;
const int p=1000000;
bool prime[p+1];
vector<int>v;

void sieve(){

    int n; cin>>n;

   for(int i=4; i<=p; i+=2){

      prime[i]=true;

   }

   for(int i=3; i*i<=p; i+=2){
         if(prime[i]==false){

            for(int j=i*i; j<=p; j+=i+i){
                prime[j]=true;
            }
         }
   }



       if(prime[n]==false) {
        cout<< "Yes"<<endl;

       }
       else{
        cout<< "No"<<endl;

   }



}


int main(){



    int t;
    cin>>t;
    while(t--)
    {
        sieve();
    }
}


