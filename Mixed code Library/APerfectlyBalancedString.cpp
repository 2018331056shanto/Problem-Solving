	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		set<char>set;
		for(auto x:s)
			set.insert(x);
		if(s.size()==set.size()||set.size()==1)
		{
			cout<<"YES"<<endl;
			return ;
		}
		std::vector<int> v[28];
		bool ar[28];
		memset(ar,false,sizeof(ar));
		for(int i=0;i<s.size();i++)
		{
			int x=int(s[i])-int('a');
			if(ar[x]==false)
			{
				ar[x]=true;
				v[x].push_back(i);
			}
			else
			{
				int first=v[x][0];
				v[x].clear();
				if(i-first==set.size())
				{
					// cout<<i<<endl;
					v[x].push_back(i);
					continue;
				}
				else
				{
					cout<<"NO"<<endl;
					return;
				}
			}
		}
		cout<<"YES"<<endl;
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
	//have to check whether there is all the different characters between any two consecuteive characters
	//if yes then yes if no then no
