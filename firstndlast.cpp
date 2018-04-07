#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t,n,c=0;
  cin>>t;
  while(t--){
    cin>> n;
    int m =n;
    while(m>0){
      c=c+1;
      m=m/10;
    }
    int k = pow(10,(c-1));
    int l= n%10;
    int f= n/k;
    c=0;
    cout<<f<<" "<<l<<endl;

  }
}
