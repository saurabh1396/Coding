#include<iostream>
using namespace std;
bool check(int k){
  int s;
while(k>0){
  s=k%10;
  if(s>=0&&s<=3){
    return true;
  }
  k=k/10;
}
return false;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;int k;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>k;
      if(check(k))
      cout<<k<<" ";
      }
    cout<<endl;
  }
}
