#include<iostream>
#include<cmath>
using namespace std;
bool checkprime(int n);
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=2;i<n;i++){
      int k=n-i;
      if(checkprime(i)&&(checkprime(k))){
        cout<<i<<" "<<k<<endl;
        break;
      }
    }
  }
}
bool checkprime(int n){
  int c=0;
 int k = int(floor(sqrt(n)));
 for(int i=2;i<=k;i++){
if((n%i)==0){
  return false;
}
 }

   return true;

}
