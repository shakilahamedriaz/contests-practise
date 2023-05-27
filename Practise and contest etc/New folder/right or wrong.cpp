#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b;
char c;
cin>>a>>c>>b;

if(a>b && c=='>'){

    cout<< "Right"<<endl;
}
else if(a<b && c== '<'){

    cout<< "Right"<<endl;
}
else if(a==b && c== '='){

   cout<< "Right"<<endl;
}

else {
    cout<< "Wrong"<<endl;
}



return 0;
}
