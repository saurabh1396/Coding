#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t=1,n,sum=0,k=0;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum=sum+arr[i];
    }
     sort(arr,arr+n);
    int c= arr[0];
    for(int i=1;i<n-1;i++){

      if((arr[i]>arr[i-1])&&(arr[i]<arr[i+1])){
        if(c==(sum-(c+arr[i]))){
          k=1;
        }
      }
      c=c+arr[i];
    }
    if(k>0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
