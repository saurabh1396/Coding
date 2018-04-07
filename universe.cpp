#include<iostream>
#include<string>
using namespace std;
int calculate_damage(string);
string hack(string);
int main(){
  int t,te,d,c=0;
  string str,hstr;
  cin>>t;
  te=t;
  while(t--){
    cin>>d;
    cin>>str;
    hstr=str;
    int dam= calculate_damage(str);
    while ((dam>d)&&(c<100)) {
      hstr= hack(hstr);
       c=c+1;
      dam= calculate_damage(hstr);
    }
      if(c<98){
        cout<<"Case #"<<te-t<<":"<<" "<<c<<endl;
        c=0;
      }else{
        cout<<"Case #"<<te-t<<":"<<" "<<"IMPOSSIBLE"<<endl;
        c=0;
      }

    }

  }
string hack(string str){
  int l = str.length();
  for(int i = l; i>0;i--){
    if(str[i]=='S'){
      if(str[(i-1)]=='C'){
       swap(str[i],str[(i-1)]);
       break;
      }
    }
  }
   return str;
}
int calculate_damage(string str){
int l = str.length();
int sum = 0,k=1;
for(int i = 0 ; i<l;i++){
  if(str[i]=='C'){
    k=k*2;
  }
  else{
    sum = sum+k;
  }
}
return sum;
}
