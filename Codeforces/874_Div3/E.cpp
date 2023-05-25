#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<set<int>>g(n);
	vector<set<int>>v(n);
	vector<int>a(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]--;
		g[i].insert(a[i]);
		g[a[i]].insert(i);
	}

	vector<int>d(n);
	for(int i=0;i<n;i++)
	{
		d[i]=g[i].size();
	}

	int cycle=0,bamboos=0;
	vector<bool>vis(n);
	for(int i=0;i<n;i++)
	{

		if(!vis[i])
		{
			queue<int>q;
			q.push(i);

			vector<int>component={i};

			vis[i]=true;

			while(!q.empty())
			{
				int f=q.front();
				q.pop();

				for(int x:g[f])
				{
					if(!vis[x])
					{
						q.push(x);
						vis[x]=true;
						component.push_back(x);
					}
				}
			}

			bool b=false;
			for(int j:component)
			{
				if(d[j]==1)
				{
					b=true;
					break;
				}
			}

			if(b)
			{
				bamboos++;
			}
			else
			{
				cycle++;
			}
		}


	}

	cout<<cycle+min(bamboos,1)<<" "<<cycle+bamboos<<endl;
	

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
