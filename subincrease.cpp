#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n],max,max2=0;
    cin>>arr[0];
    max=arr[0];
    for(int i=1;i<n;i++){
      cin>>arr[i];
      if(arr[i-1]<arr[i]){
        max=max+arr[i];
      }
      else{

        if(max2<max){
        max2=max;
        max=arr[i];
      }
      }
    }
    cout<<max2<<endl;

  }
}
