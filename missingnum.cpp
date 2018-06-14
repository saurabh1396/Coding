#include<iostream>
using namespace std;
int check(int,int ,int[]);
int main(){
  int t,n,k,l;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n-1];
    int krr[n];
    for(int i = 0;i<(n-1);i++)
    {
      cin>>arr[i];

    }
    if(n!=2){
  for(int i =1;i<n;i++){
        if(check(i,n,arr)==0){
          k=i;
          break;
        }
  }}
  else{
    if(arr[0]==1){
      k=2;
    }
    else{
      k=1;
    }
  }

  cout<<k<<endl;
}

}
int check(int e,int n, int arr[]){
  int r=0;
  for(int i=0;i<n;i++){
     if(e==arr[i]){
       r=1;
       break;
     }

  }
  return r;

}
