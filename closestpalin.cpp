#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string);
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x=1;
    cin>>n;
    int ne=n,po=n;
    if(isPalindrome(to_string(n))!=true){
while(x<10000){

  ne = ne-1;
if(isPalindrome(to_string(ne))){
  cout<<ne<<endl;
  break;
}else{
po= po+1;
if(isPalindrome(to_string(po))){
  cout<<po<<endl;
  break;
}
}
x=x+1;;
}

}
else{
  cout<<n<<endl;
}
}
}

bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {

            return false;
        }
    }
    return true;
}
