#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  cin.ignore();

  while(t--){
    string str,str1="",str2="";
    getline(cin,str);
    for(int i = 0 ; i <str.length();i++){
      int k = int(str[i]);
      if((str[i]>='A'&&str[i]<='Z') || (str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9'))
      {
        str1 = str[i]+str1;
        str2= str2+str[i];
      }}
      transform(str1.begin(),str1.end(),str1.begin(),::toupper);
      transform(str2.begin(),str2.end(),str2.begin(),::toupper);

      if(str1.compare(str2)==0){
        cout<<"YES"<<endl;

      }else{
        cout<<"NO"<<endl;
      }


    }
}
