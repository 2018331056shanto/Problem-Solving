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

	if(n>2)
	{
		cout<<"No"<<endl;
	}
	else if(abs(v[0]-v[1])<=1)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
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
