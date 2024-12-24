#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int x,y; 
	cin>>x>>y; 

	std::vector<int>a,b;

	for(int i=0;i<32;i++)
	{
		if(x&(1<<i))
		{
			a.push_back(1);
		}
		else
		{
			a.push_back(0);
		}
	}

	for(int i=0;i<32;i++)
	{
		if(y&(1<<i))
		{
			b.push_back(1);
		}
		else
		{
			b.push_back(0);
		}
	}

	
	int cnt=0; 

	for(int i=0;i<32;i++)
	{
		if(a[i]==b[i])
		{
			cnt++;
		}
		else
		{
			break;
		}
	}

	
	cout<<(1<<cnt)<<endl;
	
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
