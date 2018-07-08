#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n],nrr[n],max,c=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    max=arr[n-1];
    for(int i =n-2;i>=0;i--){
        if(arr[i]>max){
          nrr[c]=arr[i];
          c++;
          max=arr[i];
        }
    }
    for(int i=c-1;i>=0;i--){
      cout<<nrr[i]<<" ";
    }
    cout<<arr[n-1]<<" ";
    cout<<endl;
  }
}
