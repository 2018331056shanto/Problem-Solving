	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		std::map<char, int> map;
		for(int i=0;i<4;i++)
		{
			char x;
			cin>>x;
			map[x]++;
		}
		if(map.size()==1)
		{
			cout<<0<<endl;
		}
		else if(map.size()==2)
		{
			cout<<1<<endl;
		}
		else if(map.size()==3)
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<3<<endl;
		}

	
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