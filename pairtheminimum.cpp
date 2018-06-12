#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[2*n];
    for(int i=0; i<(2*n);i++){
      cin>>arr[i];
       }
       int l = 2*n;
    sort(arr,arr+l);


  int start=0,end=(2*n-1);
  for(int i = 0 ; i <n;i++)
  {
    cout<<"("<<arr[i]<<","<<arr[end--]<<")";
  }
  cout<<endl;
}
}
