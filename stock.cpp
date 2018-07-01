#include<iostream>
#include <cstdlib>
#include<algorithm>
using namespace std;
int max(int[]);
int main(){
  int t,n;
  cin>>t;
  while(t--){
    int min2=0,min1=0,max2=0,max1,s=0,c=10005,d=0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
      cin>>arr[i];
       if(s<((arr[i-1]-arr[i]))){
         s=(arr[i-1]-arr[i]);
         min2=i;
       }
    }
    max1=min2-1;
    for(int k=0;k<max1;k++){
      if(c>arr[k]){
        c=arr[k];
        min1=k;
      }
    }
    for(int k=min2;k<n;k++){
      if(d<arr[k]){
        d=arr[k];
        max2=k;
      }
    }
    cout<<"("<<min1<<" "<<max1<<")";
    cout<<"("<<min2<<" "<<max2<<")"<<endl;
  }
}
