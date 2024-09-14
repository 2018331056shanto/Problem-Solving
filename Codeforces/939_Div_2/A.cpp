#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int k,q; 
	cin>>k>>q; 

	std::vector<int> v(k),vq(q);

	for(int i=0;i<k;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<q;i++)
	{
		cin>>vq[i];
	}

	
	for(int i=0;i<q;i++)
	{
		if(vq[i]<v[0])
		{
			cout<<vq[i]<<" ";
		}
		else
		{
			cout<<v[0]-1<<" ";
		}
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
