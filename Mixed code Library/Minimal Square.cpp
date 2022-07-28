#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            if(b*2>=a)
            {
                long long int c;
                c=(2*b);
                cout<<c*c<<endl;
            }
            else
            {
                cout<<a*a<<endl;
            }
            
            
        }
        else
        {
            if(2*a>=b)
            {
                long long int d;
                d=2*a;
                cout<<d*d<<endl;
            }
            else
            {
                cout<<b*b<<endl;
            }
            
        }
        
        
    }
}