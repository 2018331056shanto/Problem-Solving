#include<bits/stdc++.h>

using namespace std;

void solve(){
	
	int n,k;

	cin>>n>>k; 

	map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;

		mp[x]++;
	}

	if(n==1||n==k)
	{
		cout<<1<<endl;
		return;
	}


	std::vector<int> v;


	for(auto [x,y]:mp)
	{
		v.push_back(y);
	}

	sort(v.begin(),v.end());


	int i=0;
	for(;i<n;i++)
	{
		if(v[i]<=k)
		{
			k-=v[i];
		}
		else
		{
			break;
		}
	}
	
	
	cout<<v.size()-i<<endl;



}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}
