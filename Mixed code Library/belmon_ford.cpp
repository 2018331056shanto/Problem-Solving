#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int> >ad;
int dis[1000000],n,w,m;
#define inf (1<<28)
void belman(int s)
{
   dis[s]=0;
   for(int j=0;j<n-1;j++)
   {
        for(int i=0;i<ad.size();i++)
        {
        	int u=ad[i].first.first;
        	int v=ad[i].first.second;
        	int cost=ad[i].second;
        	if(dis[u]+cost<dis[v])
        		dis[v]=dis[u]+cost;
        }
   }
}
bool negcylce()
{
	bool neg=false;
	for(int i=0;i<ad.size();i++)
        {
        	int u=ad[i].first.first;
        	int v=ad[i].first.second;
        	int cost=ad[i].second;
        	if(dis[u]+cost<dis[v])
        		{
        			neg=true;
        			break;
        		}
        }
  return neg;
}
int main()
{
       int u,v;
       for(int i=0;i<1000000;i++)
       	dis[i]=inf;
       cin>>n>>m;
       for(int i=0;i<m;i++)
       	  {
       	  	cin>>u>>v>>w;
       	  	ad.push_back({{u,v},w});
       	  }
       	  belman(1);
       	  bool x=negcylce();
       	  if(x)
       	  	cout<<"Neg cycle is here motherfucker"<<endl;
       	  else {
            cout<<"Its has shortest path Chutmarani"<<endl;
       	  for(int i=2;i<=n;i++)
       	  	  cout<<i<<" "<<dis[i]<<endl;
       	  }

}
