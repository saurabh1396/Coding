#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    int k= 1,s=0;
    cin>>n;
    while(n>0&&(k<=n)){
     n=n-k;
     s=s+1;
     k=k+1;
    }
    cout<<s<<endl;
  }
}
