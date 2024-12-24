#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000000];
int x[1000000];
int y[1000000];
void adfs(int a,int b)
{
    x[a]=1;
    //cout<<a<<endl;
    if(a==b)
    {
        return ;
    }
    for(int i=0;i<g[a].size();i++)
    {
        if(!x[g[a][i]])
        {
            //cout<<g[a][i]<<" ";
            adfs(g[a][i],b);
        }
    }
   // cout<<endl;
}
void bdfs(int a,int b)
{
    y[a]=1;
    if(a==b)
    {
        return ;
    }
    for(int i=0;i<g[a].size();i++)
    {
        if(!y[g[a][i]])
        {
           // cout<<g[a][i]<<" ";
            bdfs(g[a][i],b);
        }
    }
   // cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        for(int i=0;i<m;i++)
        {
            int p,q;
            cin>>p>>q;
            g[p].emplace_back(q);
            g[q].emplace_back(p);
        }
        adfs(a,b);
        bdfs(b,a);
        int s=0,r=0;
       /* for(int i=0;i<n;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
       for(int j=0;j<n;j++)
        {
            cout<<y[j]<<" ";
        }
        cout<<endl;
        */
        for(int i=1;i<=n;i++)
        {
            if(x[i]==0)
            {
                s++;
            }
            if(y[i]==0)
            {
                r++;
            }

        }
        //cout<<s<<endl;
        //cout<<r<<endl;
        cout<<s*r<<endl;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        memset(g,0,sizeof(g));
        
    }
}