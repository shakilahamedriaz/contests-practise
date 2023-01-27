#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int x= n+n*n+n*n*n;

if(x%2==0){

    cout<< "Good"<<endl;
}
else{

    cout<< "Not Good"<<endl;
}


return 0;
}

