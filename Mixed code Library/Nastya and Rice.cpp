#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
       int e=a+b;
       int f=a-b;
       int y=c+d ;
       int x=c-d;
       if(f*n<=y&&e*n>=x)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
       
        
    }
}