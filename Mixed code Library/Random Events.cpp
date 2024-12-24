#include<bits/stdc++.h>
using namespace std;
int  a[200000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int st=n;
        while(st>0&&a[st-1]==st)
        {
            st--;
        }
        
        //cout<<st<<endl;
        double fail=st>0?1:0;
        for(int i=0;i<m;i++)
        {
            double r,p;
            cin>>r>>p;
            if(r>=st)
            {
                fail*=1-p;
            }
        }
        cout<<1-fail<<'\n';
            
       
        
        
    }
}