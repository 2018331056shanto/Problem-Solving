#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,e,f,g,sum=0;
        cin>>a>>b>>c>>d;
        if(b>=a)
        {
            cout<<b<<endl;
            
        }
        else
        {
            if(d>=c)
            {
                cout<<"-1"<<endl;
               
            }
            else
            {
                e=a-b;
                f=c-d;
                
                g=e/f;
                if(b+(g*f)==a)
                {
                    cout<<b+g*c<<endl;
                }
                else
                {
                    cout<<b+(g+1)*c<<endl;
                }
                
              
                
                
                
                  
              
            }
            
        }
        
    }
}