	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		
		if(n%2==0)
		{
			for(int i=n-2;i>=1;i--)
			{
				cout<<i<<" ";
			}
			cout<<n-1<<" "<<n<<endl;
		}
		else
		{
			cout<<1<<" ";
			for(int i=n-2;i>=2;i--)
			{
				cout<<i<<" ";
			}
			cout<<n-1<<" "<<n<<endl;
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