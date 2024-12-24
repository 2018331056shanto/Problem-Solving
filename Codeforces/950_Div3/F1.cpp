#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int> &a,pair<int,int> &b)
{
	if(a.first!=b.first)
	{
		return a.first>b.first;
	}
	return a.second<b.second;
}

void solve(){
	
	int n,m,k; 
	cin>>n>>m>>k; 

	vector<pair<int,int>>a(k);
	map<pair<int,int>,int>idx;

	for(int i=0;i<k;i++)
	{
		cin>>a[i].first>>a[i].second;
		idx[a[i]]=i;

	}

	sort(a.begin(),a.end(),cmp);

	vector<int>ans(k);

	long long total=0;
	int cur=m+1;
	int last=n;

	for(auto e:a)
	{
		if(cur>e.second)
		{
			ans[idx[e]]=1;
			total+=(long long)(cur-1)*(long long)(last-e.first);

			cur=e.second;
			last=e.first;
		}
	}
	total+=(long long)(cur-1)*(long long(last);

	cout<<total<<endl;

	for(auto x:ans)
		cout<<x<<" ";

	cout<<endl;


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
