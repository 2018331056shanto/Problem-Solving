#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,flag=0,idx=0;
       cin>>n>>m;
       int a[10000];
       int b[10000];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<m;i++)
       {
           cin>>b[i];
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(a[i]==b[j])
               {
                   flag=1;
                   idx=a[i];
                   break;
               }
           }
           if(flag)
           {
               break;
           }
       }
       if(flag)
       {
           cout<<"YES"<<endl;
           cout<<"1"<<" "<<idx<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       

    }
}
    