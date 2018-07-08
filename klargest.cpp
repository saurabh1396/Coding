#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>k;
    cin>>n;
    int arr[n],nrr[n],c=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<k-1;i++)
    {
      cout<<-1<<" ";
      nrr[i]=arr[i];
    }
    sort(nrr,nrr+(k-1));
    for(int i=k-1;i<n;i++){
      c=c+1;
      nrr[i]=arr[i];
      sort(nrr,nrr+(k-1+c));
      cout<<nrr[c-1]<<" ";
    }
    cout<<endl;
  }
}
