#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n; 

	std::vector<int> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int mx=0;
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		if(v[i+1]<v[i])
		{
			cnt++;
			for(int j=i+1;j<n;j++)
			{
				mx=max(mx,v[j]);
			}
			// break;
		}
	}

	if(mx<=v[0]&&cnt<=1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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
