#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,s,cnt=0;
        cin>>a>>b>>n;
       if(a>b)
       {
           swap(a,b);
       }
       while(b<=n)
       {
           a=a+b;
          // cout<<a<<endl;
           swap(a,b);
           cnt++;
       }
       cout<<cnt<<endl;
    }
}