#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,e,f;
        cin>>a>>b>>c;
       if(a>=c)
       {
           cout<<"-1"<<" ";
       }
       else
       {
           cout<<"1"<<" ";
       }
       if(c/b>=a)
       {
           cout<<"-1"<<" ";
       }
       else
       {
           cout<<b<<" ";
       }
       cout<<endl;
       
       
    }
}