#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    string str;
    int r,s=0,c=0;
    cin>>n;
    for(int i = 0 ;i<n;i++){
      cin>>r;
      s=s+r;
      cin>>str;
      if(str=="out"){
        c=c+1;
        str="";
      }
        }
        int a = ceil(s/c);

        cout<<a<<endl;
  }
  return 0;

}
