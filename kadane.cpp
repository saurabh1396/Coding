#include<iostream>
#include<algorithm>
using namespace std;
int filler(int,int[],int);
int main(){
  int t,n,p,a,max;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    int krr[n];
    for(int j=0;j<n;j++){
      cin>>arr[j];
    }
    sort(arr,arr+n);
    krr[0]=arr[n-1];
for(int i=2;i<=n;i++){
 max= filler(i,arr,n);
 krr[i-1]=max;
}

sort(krr,krr+n);
 a = krr[n-1];
  }
cout<<a<<endl;
}
int filler(int l,int arr[],int n){
  int x=1,s=0;
  int temp[n-l+1];
for(int j=0;j<(n-l+1);j++)
{
  while(x<=l){
    s= s+arr[j];
    x=x+1;
  }
  temp[j]=s;
}
int f = sizeof(temp)/sizeof(temp[0]);
sort(temp,temp+f);
return temp[f-1];
}
