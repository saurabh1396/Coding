#include<iostream>
using namespace std;
bool arraySortedOrNot(int arr[],int n);
int check(int arr[],int n);
int main(){
  int t,te,n,c=1;
  cin>>t;
  te=t;
  while (t--) {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    while(c>0){
      c=0;
    for(int i=0;i<(n-2);i++){
      if(arr[i]>arr[i+2]){
        swap(arr[i],arr[i+2]);
        c++;
      }
      }
    }
    if(arraySortedOrNot(arr,n))
    {
      cout<<"Case #"<<te-t<<":"<<" "<<"OK"<<endl;
    }
    else
    {
      int in = check(arr,n);
      cout<<"Case #"<<te-t<<":"<<" "<<in<<endl;
    }

  }
}
int check(int arr[],int n){
int i;
for( i=0;i<n;i++){
  if(arr[i]>arr[i+1]){
    return i ;
  }

}
return 0;
}
bool arraySortedOrNot(int arr[], int n)
{

    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)


        if (arr[i-1] > arr[i])
            return false;


    return true;
}
