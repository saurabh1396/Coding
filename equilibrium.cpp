#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n], s=0,a=0,c=0,p=-1;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      s=s+arr[i];
    }
    //a=arr[0];
    if(n==1)
    p=1;
    for(int i=1;i<n-1;i++){
     a=a+arr[i-1];
     c=s-arr[i]-a;
     if(c==a){
       p=(i+1);
       i=500;
     }
    }
    cout<<p<<endl;
  }
}
