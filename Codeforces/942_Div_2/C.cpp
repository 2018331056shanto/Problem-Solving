#include<bits/stdc++.h>
using namespace std;

int check(vector<int>&v,int mid,int k,int n)
{
	for(int i=0;i<n;i++)
	{
		if(v[i]<mid)
		{
			if((mid-v[i])>k)
				return -1;
			else
				k-=(mid-v[i]);
		}
	}
	return k;
}

void solve(){
	
	int n,k;
	cin>>n>>k; 

	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
		
	}
	// sort(v.begin(),v.end());
	
	long long low=1;
	long long high=1ll*1e12;
	int level=1;

	while(low<=high)
	{
		long long mid=(high-low)/2+low;

		if(check(v,mid,k,n)>=0)
		{
			level=mid;
			low=mid+1;

		}
		else
		{
			high=mid-1;
		}
	}
	// cout<<level<<endl;

	int ans=(n*level)-n+1;

	int extra=(k%level);

	

	cout<<ans<<" "<<level<<" "<<extra<<endl;	



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
