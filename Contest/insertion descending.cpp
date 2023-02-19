#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<< "Enter the size of the aray : ";
    cin>>n;
    int arr[n+1];
    cout<< "Enter the elements : ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }


    for(int i=1; i<n; i++){

        int j=i;
        

       while(j>0 && arr[j-1]<arr[j]){

        int temp= arr[j];
        arr[j]=arr[j-1];
        arr[j-1] =temp;

        j--;
       } 
    }

    cout<< "The sorted form of the given array  is : ";

    for(int i=0; i<n; i++){

        cout<<arr[i]<< " ";
    }
}