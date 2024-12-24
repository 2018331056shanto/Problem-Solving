	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		vector<int>v(s.size()+1);
		for(int i=0;i<s.size();i++)
		{
			v[i+1]=v[i]+s[i]-'0';
		}
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	/* code */
		// 	cout<<v[i]<<" ";
		// }
		int w,q;
		cin>>w>>q;
		int n=s.length();
		vector<int>rem[9];
		for(int i=0;i+w<=s.length();i++)
		{

			int x=(v[i+w]-v[i])%9;
			rem[x].push_back(i);
		}

		for(int i=0;i<q;i++)
		{
			int l,r,k;
			cin>>l>>r>>k;
			
			int x=(v[r]-v[l-1])%9;
			array<int,2>ans{n,n};

			for(int u=0;u<9;u++)
			{
				if(rem[u].size()>1&&(u*x+u)%9==k)
				{
					ans=min(ans,array{rem[u][0],rem[u][1]});
				}
				for(int v=0;v<9;v++){
					if(u!=v&&!rem[u].empty()&&!rem[v].empty()&&(u*x+v)%9==k){
						ans=min(ans,array{rem[u][0],rem[v][0]});
					}
				}

			}
			if(ans[0]==n){
			cout<<-1<<" "<<-1<<endl;
		}
		else{
			cout<<ans[0]+1<<" "<<ans[1]+1<<endl;
		}

		}

	
		// for(auto x:rem){
		// 	cout<<"sz "<<x.size()<<endl;
		// 	for(auto y:x){
		// 		cout<<y<<endl;
		// 	}
		// }

	
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