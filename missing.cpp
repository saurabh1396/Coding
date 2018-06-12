#include<iostream>
using namespace std;
int main(){
  int t,n,x,s;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>x;
    int arr[n],val=0;
    int krr[n];
    cin>>arr[0];
    int k = arr[0];
    for(int i = 1 ; i <n; i++){
      cin>>arr[i];
      }
    for(int i = 0;i<n;i++){
      while(arr[i]<arr[i+1]){
        krr[val++]=++arr[i];
      --x;
        if(x==0){
          s= krr[--val];
          break;
        }
      }

    }
    if(val!=0)
    cout<<s<<endl;
    else
    cout<<"-1"<<endl;
    }
  }
