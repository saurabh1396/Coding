#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n,x,min;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    cin>>x;
     sort(arr,arr+n);
     min = arr[x-1];
    }
    cout<<min<<endl;
  }
