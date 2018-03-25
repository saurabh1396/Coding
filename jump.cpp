#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        long n;
        long sum=0;
        cin >>n ;
        while (n>0){
         sum = sum+2*n;
         n= n/2;
        }
      cout << sum << endl;
    }
    return 0;
}
