#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void even(vector <int>);
void odd(vector<int>);
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
void even(vector<int> g1){
  int k= g1.size();
  //cout<<k<<endl;
  //cout<<g1[1]<<" "<<g1[0]<<endl;
  int b = (g1[(k)/2-1] + g1[((k/2+1)-1)])/2;
   cout<<b<<endl;
}
void odd(vector<int> g1){
int size=g1.size();
 int b = g1[(size/2+1)-1];
 cout<<b<<endl;
}
