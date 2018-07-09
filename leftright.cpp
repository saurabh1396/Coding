#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n],k=-1,max;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n-1;i++){
         if(arr[i]>=max){
           max=arr[i];
        for(int j=i+1;j<n;j++){
          if(arr[i]<=arr[j]){
            if(j==n-1){
              k=arr[i];
              i= 1000000;

            }

             continue;
          }else{

            break;
          }

        }

    }
      }
  cout<<k<<endl;
  }
}
