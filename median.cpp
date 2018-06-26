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
  while(t--){
   cin>>n;
   g1.push_back(n);

   sort(g1.begin(),g1.end());
   if((g1.size()%2)==0){
     even(g1);
   }
   else{
     odd(g1);
   }

}
}
int even(vector<int> g1){
  int size= g1.size()/2;
  int b = g1[size] + g1[size+1];
   cout<<b<<endl;
}
int odd(vector<int> g1){
 int size=g1.size()/2;
 int b = g1[size+1];
 cout<<b<<endl;
}
