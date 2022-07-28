#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int r=0,sr=0,p=0;
        long long int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='S')
            {
                sr++;
            }
            else
            {
                p++;
            }
            
        }
       // cout<<r<<" "<<sr<<" "<<p<<endl;
       // long long int mx=max(p,max(r,sr));
        //cout<<mx<<endl;
       
 
         if(sr>=r&&sr>=p)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"R";
            }
            cout<<endl;
        }
        else if(r>=p&&r>=sr)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"P";
            }
            cout<<endl;
        }
        else {
       
            for(int i=0;i<n;i++)
            {
                cout<<"S";
            }
            cout<<endl;
        
        }
       
        
    }
}