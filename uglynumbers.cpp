#include<iostream>
using namespace std;
unsigned uglyNumbers(int n){
  unsigned ugly[n];
  unsigned i2,i3,i5=0;
  unsigned multiple_2 = 2;
  unsigned multiple_3 = 3;
  unsigned multiple_5 = 5;
  unsigned ugly_num =1;
ugly[0]= 1;
for(int i =1;i<n;i++){
  ugly_num = min(multiple_2,min(multiple_3,multiple_5));
  ugly[i]= ugly_num;
  if(ugle_num==multiple_2){
    i2=i2+1;
    multiple_2=ugly[i2]*2;
  }
  if(ugle_num==multiple_3){
    i3=i3+1;
    multiple_3=ugly[i3]*3;
  }
  if(ugle_num==multiple_5){
    i5=i5+1;
    multiple_5=ugly[i5]*5;
  }
}
return ugly_num;
}
int main(){

}
