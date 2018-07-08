#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cin>>k;
    sort(arr,arr+n);
    cout<<arr[k-1]<<endl;
  }
}
