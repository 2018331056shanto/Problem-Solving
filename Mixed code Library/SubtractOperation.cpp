#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	std::vector<int>v;
	set<int>st;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
		st.insert(x);
	}
	sort(v.begin(),v.end());
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		int x=v[i]+k;
		auto it=lower_bound(v.begin(),v.end(),x);
		if(it!=v.end()&&(*it)==x)
		{
			flag=true;
			break;
		}
	}
	cout<<(flag?"YES":"NO")<<endl;
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	