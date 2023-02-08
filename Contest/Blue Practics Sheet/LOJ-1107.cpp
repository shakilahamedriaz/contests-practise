#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin>>t;
    int i=1;
    while(t--){

        int x1,y1,x2,y2,n;
        cin>>x1>>y1>>x2>>y2;
        cout<< "Case "<<i<< ": "<<endl;

        cin>>n;
        while(n--){


            int x,y;
            cin>>x>>y;


          if (x > x1 && x < x2 && y > y1 && y < y2)

            cout<< "Yes"<<endl;

          else

            cout<< "No"<<endl;


        }
        i++;

    }




    return 0;
}
