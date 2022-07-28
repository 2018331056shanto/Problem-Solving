#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int s,t,e;
        
        cin>>s>>t>>e;
        if(e+s<=t)
        {
            cout<<"0"<<endl;
        }
        else if(e==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            
        
        if(s>=t)
        {
            int f,g;
            f=s-t;
            if(f<=e)
            {
                if((e-f)%2==0)
                {
                    cout<<f+((e-f)/2)<<endl;
                }
                else
                {
                    cout<<f+((e-f)/2)+1<<endl;
                }
                
            }
            else
            {
                cout<<e+1<<endl;
                
            }
            
        }
        else
        {
            int f;
            f=t-s;
            if(f<e)
            {
                if((e-f)%2==0)
                {
                    cout<<(e-f)/2<<endl;
                }
                else
                {
                    cout<<(e-f)/2+1<<endl;
                }
                
            }

        }
        
        }     
       
        
    }
}