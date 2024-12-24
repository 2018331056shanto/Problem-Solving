#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,d=0;
       cin>>n;
       int a[1000],b[1000];
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       for(int i=0;i<2*n;i++)
       {
           int c;
           cin>>c;
           if(b[c]==0)
           {
               a[d++]=c;
               b[c]=1;
           }
       }
       for(int i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
}