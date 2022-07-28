#include<bits/stdc++.h>
using namespace std;
const int Mod=1e9+7;
int sz[100000];
int n; 
 vector<long long int>adj[1000000];
  vector<long long int>pr,total;
 void  dfs(int v,int w)
        {
            sz[v]=1;
            for(int u : adj[v])
            {
                if(u==w)
                {
                    dfs(u,v);
                    sz[v]+=sz[u];
                }
            }
            total.push_back(sz[v]*(n-sz[v]));

        }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
      
      
        for(int i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
      
        int p;
        cin>>p;
        for(int i=0;i<p;i++)
        {
            int b;
            cin>>b;
            pr.push_back(b);
        }
        sort(pr.begin(),pr.end(),greater<>());
        if(p<n-1)
        {
            for(int i=0;i<(n-1-p);i++)
            {
                pr.push_back(1);
            }


        }
        if(p>n-1)
        {
            long int pro=0;
            for(int i=n-1;i<=(p);i++)
            {
                pro*=pr[i];
                
            }
            pr[n-2]=pro;
            sort(pr.begin(),pr.end(),greater<>());
        }
        dfs(1,0);
        sort(total.begin(),total.end(),greater<>());
        long long int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=pr[i]*total[i];

        }
        cout<<sum%(Mod)<<endl;

    }

}