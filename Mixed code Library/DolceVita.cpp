	// #include<bits/stdc++.h>
	// using namespace std;

	// void solve()
	// {
	// 	int n,x;
	// 	cin>>n>>x;
	// 	long long sum=0;
	// 	std::vector<int> v(n);
	// 	long long ans=0;
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		cin>>v[i];
	// 	}
	// 	sort(v.begin(),v.end());
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		sum+=v[i];
	// 		if(sum<=x)
	// 		{
	// 			ans+=(x-sum)/(i+1)+1;
	// 		}
	// 	}
	// 	cout<<ans<<endl;
	
	// }

	// int32_t main()
	// {
	// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// 	int t;
	// 	cin>>t;
	// 	while(t--)
	// 	{
	// 		solve();
	// 	}
	// }
	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,x;
		cin>>n>>x;
		long long sum=0;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		sort(v.begin(),v.end());
		if(v[0]>x)
		{
			cout<<0<<endl;
			return ;
		}
		long long ans=0;
		int cnt=0;
		if(sum==x)
		{
			ans+=n;
			
		}
		else if(sum<x)
		{
			while(sum<=x)
			{
				
				sum+=n;
				cnt++;

			}
			ans+=n*cnt;
			
		}


		for(int i=n-1;i>0;i--)
		{
			
			if(sum-(cnt+v[i])<=x)
			{
				
				int cnt1=0;
				sum-=(cnt+v[i]);
				
				if(i==n-1)
				{
					cnt--;
				}
				while(sum<=x)
				{
					
					sum+=i;

					cnt1++;
					
				}
				
				ans+=cnt1*i;
				
				cnt+=cnt1;
				
				
			}
			
		}
		// cout<<ans<<endl;
		if(n==1)
		{
			cout<<ans<<endl;
			return;
		}
		else
		{
			if(cnt==0)
			{
				cout<<x-v[0]+1<<endl;
				return;
			}
		 	ans+=(x-(v[0]+cnt));
		}
		cout<<ans<<endl;
	


	
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