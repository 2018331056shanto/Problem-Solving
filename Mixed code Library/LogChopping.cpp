	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		int ev,od;
		ev=od=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2)
			{
				od++;
			}
			else
			{
				ev++;
			}
		}
		if(ev%2)
		{
			cout<<"errorgorn"<<endl;
		}
		else
		{
			cout<<"maomao90"<<endl;
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