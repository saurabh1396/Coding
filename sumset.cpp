#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int m,n;
 cin>>n;
 int nrr[n];
 for(int i=0;i<n;i++){
   cin>>nrr[i];
 }
 cin>>m;
 int mrr[m];
 for(int i=0;i<m;i++){
   cin>>mrr[i];
 }
 sort(nrr,nrr+n);
 sort(mrr,mrr+m);
 int s= mrr[0]-nrr[0];
 int e= mrr[m-1]-nrr[n-1];
 for(int i=s;i<=e;i++){
   cout<<i<<" ";
 }
}
