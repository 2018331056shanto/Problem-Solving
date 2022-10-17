#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,q;
	cin>>n>>q;
	vector<int>v(n);
	long long sum=0;
	vector<long long>cumsum;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
		cumsum.push_back(sum);

	}	
	for (int i = 1; i < n; ++i)
	{
		/* code */
		v[i]=max(v[i-1],v[i]);
	}
	
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		int upper=upper_bound(v.begin(),v.end(),x)-v.begin();
		// cout<<"uuper :"<<upper<<endl;
		if(upper==0)
			cout<<0<<" ";
		else
			cout<<cumsum[upper-1]<<" ";
	}
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
