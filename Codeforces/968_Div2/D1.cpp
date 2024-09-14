#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,m;
	cin>>n>>m; 

	long long x=0;

	for(int i=0;i<n;i++)
	{
		set<int>st;
		int l;
		cin>>l;
		for(int j=0;j<l;j++)
		{
			int y;
			cin>>y;
			st.insert(y);
		}

		long long k=0; 
		bool flag=false;
		while(true)
		{
			if(st.find(k)==st.end())
			{
				if(!flag)
				{
					flag=true;
				}
				else
				{
					x=max(x,k);
					break;
				}
			}
			k++;
		}
	}

	long long ans=0;

	if(x>=m)
	{
		cout<<(m+1)*x<<endl;
	}
	else
	{
		cout<<(x+1)*x+(m*(m+1)/2)-(x*(x+1)/2)<<endl;
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
