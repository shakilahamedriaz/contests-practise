#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5][5]= {{25,24,23,22,21},
                    {10,11,12,13,20},
                    {9,8,7,14,19},
                    {1,4,5,16,17}};


      int t;
      cin>>t;
      while(t--)
      {
          int key;
          cin>>key;


          for(int i=1; i<=5; i++){

              for(int j=5; j>=1; j--){

                if(arr[j][i]==key){

                    cout<< "Case "<<i<< ": "<<i<< " "<<j<<endl;
                }
              }
          }



      }


    return 0;
}
