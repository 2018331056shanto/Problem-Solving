#include<bits/stdc++.h>
using namespace std;
set<pair<int,int>>clink;
int vis[10010];
int dis[10010];
int low[10010];
int l=0;
//int ed;
std::vector<int> v[10000];
void init()
{
	for(int i=0;i<10000;i++)
	{
		v[i].clear();
	}
	memset(vis,0,sizeof(vis));
	memset(dis,0,sizeof(dis));
	memset(low,0,sizeof(low));
	l=0;
	clink.clear();
}
void dfs(int child,int parent)
{
	int children=0;
     low[child]=dis[child]=++l;
     vis[child]=1;
     for(int i=0;i<v[child].size();i++)
     {
     	if(v[child][i]==parent)
     	{
     		continue;
     	}
     	if(!vis[v[child][i]])
     	{
     		dfs(v[child][i],child);
     		children++;
     		
     		if(dis[child]<low[v[child][i]])
     		{
     			int p,q;
     			p=child;
     			q=v[child][i];
     			if(q<p)
     				swap(p,q);

     			clink.insert({p,q});

     			//cout<<"at articulation bridge"<<child<<" "<<v[child][i]<<endl;
     			///cout<<"p and q : "<<p<<" "<<q<<endl;
     		}
     		low[child]=min(low[child],low[v[child][i]]);

     	}
     	else
     	{
     		low[child]=min(low[child],dis[v[child][i]]);
     	}
     	if(children>1&&parent==-1)
     	{
     		int p,q;
     			p=child;
     			q=v[child][i];
     			if(q<p)
     				swap(p,q);

     			clink.insert({p,q});
     	}
     }

}
int  fun(string s)
{
	int edge=0;
	std::vector<int> dig;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]=='(')
		{
			continue;

		}
		else
		{
		    dig.push_back(s[i]-48);

		}
	}
	int d=0;
	for(int i=dig.size()-1;i>=0;--i)
	{
		//cout<<dig[d]<<" "<<pow(10,i)<<endl;
		edge+=dig[d]*pow(10,i);
		//cout<<edge<<endl;
		d++;
	}
	if(dig.size()==3)
	{
		edge=edge+1;
	}
	return edge;
}

int main()
{
	int t;
	cin>>t;
	for(int tt=1;tt<=t;tt++)
	{
		int n;
		cin>>n;
		 init();
		for(int i=0;i<n;i++)
		{
			int u;
			cin>>u;
			string s;
			cin>>s;

			int ed=fun(s);
			//cout<<ed<<endl;
			for(int i=0;i<ed;i++)
			{
				int x;
				cin>>x;
				//cout<<u<<" "<<x<<endl;
				v[u].push_back(x);
				v[x].push_back(u);
			}

		}
		for(int i=0;i<10000;i++)
		{
			if(!vis[i]&&!v[i].empty())
			{
				//cout<<"in : "<<i<<endl;
				dfs(i,-1);
			}
			

		}
		 cout<<"Case "<<tt<<":"<<endl;
		 cout<<clink.size()<<" critical links"<<endl;
		 for(auto &x:clink)
		 {
		 	

		 	cout<<x.first<<" - "<<x.second<<endl;
		 }
		 //cout<<endl;
		

	}
	
}
		

		