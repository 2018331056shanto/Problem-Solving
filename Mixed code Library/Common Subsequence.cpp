#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,mx=0;
        cin>>n>>m;
        vector<int>a,b;
        int vis[10000];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
            vis[c]=1;
            mx=max(mx,c);
            
            
        }
        for(int j=0;j<m;j++)
        {
            int d;
            cin>>d;
            b.push_back(d);
            mx=max(mx,d);
            if(vis[d]>=1)
            {
                vis[d]=2;
            }
            else
            {
                vis[d]=1;
            }
            
            
        }
       /* cout<<mx<<endl;
        for(int i=0;i<mx;i++)
        {
            cout<<vis[i]<<" ";
        }*/
       // cout<<endl;
        int flag=0,idx=0;
       for(int i=0;i<=mx;i++)
    {
        if(vis[i]==2)
        {
          flag=1;
          idx=i;
          break;
        }
        
        
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<"1"<<" "<<idx<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    }
}
