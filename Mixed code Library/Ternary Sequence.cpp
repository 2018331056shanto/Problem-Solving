#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        if(c==z&&(a==0&&b==0&&x==0&&y==0))
        cout<<"0"<<endl;
        else
        {
            long  int mn=min(c,y);
            long int m=0;
               if(c>y)
               {
                     m=c-y;
               }
               
                if(m+a>z)
                {
                    cout<<mn*2<<endl;
                }

                else
                {
                    cout<<(mn-(z-a-m))*2<<endl;
                }
                
            
        }
            
            
        
    }
}