#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        long long int k;
        cin>>n>>k;
        vector<long long  int>a,e,f;
        long long int mx=-10000000000;
        for(int i=0;i<n;i++)
        {
            long long  int b;
            cin>>b;
            mx=max(mx,b);
            a.emplace_back(b);
            
        }
        //cout<<mx<<endl;
       long long int m=-100000000000;
        for(int i=0;i<n;i++)
        {
            e.push_back(mx-a[i]);
            m=max(m,mx-a[i]);
           
        }
       // cout<<m<<endl;
        for(int i=0;i<n;i++)
        {
            f.push_back(m-e[i]);
        }
        if(k%2)
        {
            for(int i=0;i<n;i++)
            {
                cout<<e[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<f[i]<<" ";
            }
            cout<<endl;
        }
        
    
        
       
    }
}