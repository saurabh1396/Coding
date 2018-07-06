#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n,m,k;
  cin>>t;
  while(t--){
  cin>>n;
  cin>>m;
  cin>>k;
  int nrr[n],mrr[m],c=0,s=0;
  for(int i =0;i<n;i++){
    cin>>nrr[i];
  }
  for(int i=0;i<m;i++){
    cin>>mrr[i];
  }
  sort(nrr,nrr+n);
sort(mrr,mrr+m);
  for(int i=0;i<m;i++){
    for( int j=s;j<n;j++){
      if(mrr[i]>=nrr[j]&&(mrr[i]<=(nrr[j]+k))&&(nrr[j]!=-99)){

        s=j;
        c=c+1;
        nrr[j]=-99;
        break;

      }
    }
  }
  cout<<c<<endl;
  }
}
