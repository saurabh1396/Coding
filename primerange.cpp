#include<iostream>
#include<cmath>
using namespace std;
int checkprime(int n);
int main(){
  int t,m,n,k;
  cin>>t;
  while(t--){
    cin>>m>>n;
   for(int i=m;i<=n;i++){
      if((checkprime(i)==1)&&(i!=1)){
        cout<<i<<" ";
      }
    }
cout<<endl;
  }

}
int checkprime(int n){
  int c=0;
 int k = int(floor(sqrt(n)));
 for(int i=2;i<=k;i++){
if((n%i)==0){
  return 0;
}
 }

   return 1;

}
