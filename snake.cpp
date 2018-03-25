#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string str,ns="";
    int n ;
    cin>>n;
    getline(cin,str);
    for(int i= 0 ; i <n;i++){
      char c = toupper(str.(i));
         ns= ns + str(i);
    }
   cout<<ns<<endl;
  }
  return 0 ;
}
