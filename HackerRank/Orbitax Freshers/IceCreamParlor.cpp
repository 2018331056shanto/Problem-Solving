#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int k,n; 
	cin>>k>>n; 

	std::vector<pair<int,int>> v;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x; 
		v.push_back({x,i+1});
	}

	sort(v.begin(),v.end());

	int i=0;
	int j=n-1;

	while(i<j)
	{
		int x=v[i].first;
		int y=v[j].first;
		int sum=x+y;
		if(sum>k)
		{
			j--;
		}
		else if(sum<k)
		{
			i++;
		}
		else
		{
			int l=v[i].second;
			int k=v[j].second;
			if(l>k)
			{
				swap(l,k);
			}
			cout<<l<<" "<<k<<endl;
			break;
		}
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
