	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		int ar[4];
		memset(ar,0,sizeof(ar));
		int a,b,c;
		cin>>a>>b>>c;
		int miss=6-(a+b+c);
		ar[1]=a,ar[2]=b,ar[3]=c;
		int x=ar[miss];
		ar[miss]=-1;
		int y=ar[x];
		ar[x]=-1;
		int z=ar[y];
		ar[y]=-1;
		ar[z]=-1;
		for(int i=1;i<=3;i++)
		{
			if(ar[i]!=-1)
			{
				cout<<"NO"<<endl;
				return;
			}
			
		}

			
				cout<<"YES"<<endl;
			
		
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