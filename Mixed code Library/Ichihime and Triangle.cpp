#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long int a,b,c,d,e;
       
        cin>>a>>b>>c>>d;

       if(a+b>c)
       {
            cout<<a<<" "<<b<<" "<<c<<endl;
       }

       
      else if( b+c>d)
      {
           cout<<b<<" "<<c<<" "<<d<<endl;
       }
    else
    {
       cout<<b<<" "<<c<<" "<<c+(b-1)<<endl;
    }
    
    
    
       
       
        
        
        
        
        
    }
}