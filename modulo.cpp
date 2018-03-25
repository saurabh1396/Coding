#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n , k=0;
    cin>>n;
    for(int i = 2 ; i <n; i++){
      if((n%i) >(n%(i-1))){
        k= i ;
      }
    }
    cout<<k<<endl;
  }
  return 0;
}
