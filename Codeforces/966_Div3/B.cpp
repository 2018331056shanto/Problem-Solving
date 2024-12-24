#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::vector<int> v(n);

	vector<bool>visited(n+2);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			visited[v[i]]=true;
		}
		else 
		{
			if(visited[v[i]-1]==true||visited[v[i]+1]==true)
			{
				visited[v[i]]=true;
				continue;
			}
			else
			{
				// cout<<v[i]<<endl;

				cout<<"No"<<endl;
				return;
			}
		}
	}

	cout<<"Yes"<<endl;

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
