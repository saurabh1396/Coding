#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    int s=0;
    cin>>n;
    if(n!=1){
    for(int i=2;i<n;i++){
      if((i*i)<n){
        s=s+1;
      }
    }
  cout<<(s+1)<<endl;
}
    else{
      cout<<0<<endl;
    }

  }
}
