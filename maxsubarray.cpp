#include<iostream>
#include<algorithm>
using namespace std;
//void maxi(int[],int);
int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
     for(int i=0;i<n-(k-1);i++){
       int krr[k],m=i;
       for(int j=0;j<k;j++){
          krr[j]=arr[m];
          m++;
       }
       sort(krr,krr+k);
        cout<<krr[k-1]<<" ";

     }
     cout<<endl;
  }
}
