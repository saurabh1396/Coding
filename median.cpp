#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int even(vector <int>);
int odd(vector<int>);
int main(){
  vector <int> g1;
    vector <int> :: iterator i;
  int t,n;
  cin>>t;
  while(t--){
   cin>>n;
   g1.push_back(n);
    int size = g1.size();
   sort(g1.begin(),g1.end());
   if(size!=1){
   if((size%2)==0){
     even(g1);
   }
   else{
     odd(g1);
   }}
   else{
     cout<<n<<endl;
   }

}
}
int even(vector<int> g1){
  int size= g1.size()/2;
  int b = (g1[(size)/2] + g1[(size/2+1)])/2;
   cout<<b<<endl;
}
int odd(vector<int> g1){
int size=g1.size()/2;
 int b = g1[size/2+1];
 cout<<b<<endl;
}
