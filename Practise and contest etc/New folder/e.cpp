// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {

    set<char>st;
    string str;
    cin>>str;
    for(int i =0; i< str.length(); i++){

        st.insert(str[i]);
    }

    if(st.size() % 2 == 0){

        cout<<"GO TO RAWSAN ARA"<<endl;
    }
     else{


        cout<<"GO TO YOUNUS KHAN"<<endl;
     }
    return 0;
    
}
