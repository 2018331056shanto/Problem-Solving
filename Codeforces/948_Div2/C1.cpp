#include<bits/stdc++.h>
using namespace std;


	
	int getCount(vector<pair<int,int>>&t,int divisor)
	{
		long long l=1;
		int cnt=0;


		for(auto [a,b]:t)
		{
			if(divisor%a==0)
			{
				
				l=lcm(l,a);

				cnt+=b;
			}
		}

		if(l!=divisor)
		{
			return 0;
		}
		else
		{
			return cnt;
		}

	}	


void solve(){
	
	int n;
	cin>>n; 

	vector<int>v(n);
	map<int,int>mp; 

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
	}

	int mx=*max_element(v.begin(),v.end());


	long long l=1;

	for(int i=0;i<v.size();i++)
	{
		l=lcm(l,(long long)v[i]);
		if(l>mx)
		{
			cout<<n<<endl;

			return;
		}
	}

	// cout<<l<<endl;
	// if(l>(long long)mx)
	// {
	// 	cout<<n<<endl;
	// 	return;
	// }


	vector<pair<int,int>>t;

	for(auto x:mp)
		t.push_back(x);


	int ans=0;

	for(int i=1;i*i<=mx;i++)
	{
		if(mx%i==0)
		{
			if(mp.find(i)==mp.end())
		{
			ans=max(getCount(t,i),ans);
		}
		if(mp.find(mx/i)==mp.end())
		{
			ans=max(getCount(t,mx/i),ans);
		}	
		}
		
	}



cout<<ans<<endl;
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
