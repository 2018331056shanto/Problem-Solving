#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[40000];
vector<int>cost[40000];
int vis[40000];
int ans[40000];
void bfs(int start)
{
	vis[start]=1;
	queue<int>q;
	q.push(start);
	while(!q.empty())
	{
		int front=q.front();
		q.pop();
		for(int i=0;i<v[front].size();i++)
		{
			int x=v[front][i];
			if(!vis[x])
			{
				q.push(x);
				
				vis[x]=1;
				ans[x]=ans[front]+cost[front][i];
				//cout<<x<<endl;
			}
		}
	}
}
void cln(int n)
{
	memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
		{
			ans[i]=0;
		}
}
void init(int n)
{
	for(int i=0;i<=n;i++){
		cost[i].clear();
		v[i].clear();
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	cin>>t;
	int cas=0;
	while(t--)
	{
		cas++;
		int n;
		cin>>n;
		init(n);
		for(int i=0;i<n-1;i++)
		{
			int x,y,w;
			cin>>x>>y>>w;
			v[x].push_back(y);
			v[y].push_back(x);
			cost[x].push_back(w);
			cost[y].push_back(w);

		}
		cln(n);
		bfs(0);
		int next;
		int mx=-1;
		for(int i=0;i<n;i++)
		{
			if(ans[i]>mx)
			{
				mx=ans[i];
				next=i;
			}
		}
		// cout<<next<<endl;
		// for(int l:st)
		// {
		// 	cout<<l<<endl;
		// }
		//cout<<"next "<<next<<endl;
		//cout<<next<<endl;
		cln(n);
		bfs(next);
	
		sort(ans,ans+n,greater<>());
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<ans[i]<<" ";
		// }
		// cout<<endl;
		printf("Case %d: %d\n",cas,ans[0]);
		//cout<<"nnext "<<nnext<<endl;
	}
	
}
