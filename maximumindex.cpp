#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    int max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<(n-1);i++){
      for(int j=1;j<n;j++){
        int k = j-i;
        if((max<k)&&(arr[i]<=arr[j])){
           max=k;
        }
      }

    }
    cout<<max<<endl;
  }
}
