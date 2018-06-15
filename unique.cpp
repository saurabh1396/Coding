#include<iostream>
using namespace std;
void twodigit(int);
void threedigit(int);
int main(){
  int t,n,m;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>m;
    for(int i=n;i<=m;i++){
     if((i>10)&&(i<99)){
       twodigit(i);
     }
     if((i>100)&&(i<1000)){
       threedigit(i);
     }
     if(i<=10){
       cout<<i<<" ";
     }
    }
    cout<<endl;
  }
}
void twodigit(int n){
int a,p;
a = n/10;
p= n%10;
if(a!=p)
cout<<n<<" ";
}
void threedigit(int n){
  int a,c,b,p;
  a=n/100;
  c=n/10;
  b=c%10;
  p=n%10;
  if((a!=b)&&(b!=p)&&(a!=p))
  cout<<n<<" ";
}
