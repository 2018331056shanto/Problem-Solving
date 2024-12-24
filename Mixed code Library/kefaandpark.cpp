#include<bits/stdc++.h>
using namespace std;
int  vis[900000];
 int n,m;
  int cat[900000];
  long int ans=0;
  vector<int>a[900000];
 void dfs(int x,int count)
 {
     
     vis[x]=1;
     for(int i=0;i<a[x].size();i++)
     {
         long int pos=a[x][i];
         if(!vis[pos])
         {
             if(count+cat[pos]>m)
             {
                 continue;
             }
             if(cat[pos]==1)
             {
                 dfs(pos,count+1);
             }
             else
             {
                 dfs(pos,0);
             }
             
         }
         if(a[x].size()==1&&x!=1)
         {
             ans++;
         }

     }

     

 }
int main()
{
   memset(vis,0,sizeof(vis));
    cin>>n>>m;
   
   
    for(int i=1;i<=n;i++)
    {
        cin>>cat[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);


    }
   dfs(1,cat[1]);
   cout<<ans<<endl;


}