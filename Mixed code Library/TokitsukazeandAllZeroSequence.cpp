	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		int ar[1000];
		memset(ar,0,sizeof(ar));
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			ar[x]++;
		}
		if(ar[0]!=0)
		{
			cout<<n-ar[0]<<endl;
			return ;
		}
		bool multiple=false;
		for(int i=0;i<1000;i++)
		{
			if(ar[i]>1)
			{
				multiple=true;
				break;
			}
		}
		if(multiple)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<n+1<<endl;
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