#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,s=0;
    int h=1;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]<k){
        s=s+1;
      h=arr[i];
      for(int j=i+1;j<n;j++){
        h= h*arr[j];
        if(h<k){
          s=s+1;
        }else{
          break;
        }
      }
    }
    else{
      continue;
    }

    }
    cout<<s<<endl;
  }
}
