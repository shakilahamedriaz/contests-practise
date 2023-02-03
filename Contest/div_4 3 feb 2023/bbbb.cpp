#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t,n,x=0,y=0;
    int cnt=0;
    cin>>t;
    while(t--){
        string s;
        cin>>n;
        cin>>s;


      //  for(int i=0;i<n;i++)

           int i=0;
        while(n--)

            {
            if(s[i]=='U'){
                y++;
            }else if(s[i]=='D'){
                y--;
            }else if(s[i]=='L'){
                x--;
            }else if(s[i]=='R'){
                x++;
            }
            if(x==1 && y==1){
                cnt=1;
            }

            i++;
        }
        if(cnt==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        x=0;
        y=0;
        cnt=0;
    }
    return 0;
}
