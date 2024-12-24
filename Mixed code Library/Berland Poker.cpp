#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(m==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
          double a,b,c,d;
          a=n/k;
          if(m>a)
          {
              b=m-a;
              c=ceil(b/(k-1));
              cout<<a-c<<endl;
          }
          else
          {
            cout<<m<<endl;
          }
          
        }
        
    }
}