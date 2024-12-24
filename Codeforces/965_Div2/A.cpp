#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int x,y,k;
	cin>>x>>y>>k; 

	set<pair<int,int>>st;
	if(k%2)
	{
		st.insert({x*k,y*k});
		
		if(st.size()!=k)
		while(true)
		{
			st.insert({++x,++y});
			st.insert({-1*(x),-1*(y)});
			++x;
			++y;
			if(st.size()==k)
				break;
		}
	}
	else
	{
		st.insert({(x*k)+k*20,(y*k)+k*20});
		st.insert({-(k*20),-(k*20)});
		if(st.size()!=k)
			

		while(true)
		{
			st.insert({++x,++y});

			st.insert({-1*(x),-1*(y)});
			if(st.size()==k)
				break;
			++x;
			++y;
		}

	}

	for(auto [x,y]:st)
	{
		cout<<x<<" "<<y<<endl;
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
