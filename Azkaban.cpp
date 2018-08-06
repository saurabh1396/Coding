#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
     for(int i=0;i<n;i++){
       int x=-1,y=-1;
       for(int j=i;j>=0;j--){
         if(arr[j]>arr[i]){
            x=j+1;
            j=-1000;
           }
       }

       for(int k=i+1;k<n;k++){
         if(arr[k]>arr[i]){
           y=k+1;

           k=n;

         }
       }
       int z=x+y;
     cout<<z<<" ";
     }
     cout<<endl;
  }
