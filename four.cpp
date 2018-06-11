#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int i,a[n],j,k,l,temp,s=0;
    for(i=0;i<n;i++)
        cin>>a[i];
        cin>>temp;
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                for(k=j+1;k<n;k++)
                    for(l=k+1;l<n;l++)
                        if(a[i]+a[j]+a[k]+a[l]==temp)
                            s++;

if(s>0)
cout<<1<<endl;
else cout<<0<<endl;
}
    return 0;
}
