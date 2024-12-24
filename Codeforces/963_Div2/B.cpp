#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n; 
	cin>>n; 

	std::vector<int> v(n);

	int even=0;
	int odd=0;
	priority_queue<long long ,vector<long long>,greater<long long>>a;
	priority_queue<long long>b;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]%2)
		{
			odd++;
			b.push(v[i]);
		}
		else
		{
			a.push(v[i]);
			even++;
		}
	}

	if(odd==n||even==n)
	{
		cout<<0<<endl;
	}
	else
	{
		int ans=a.size();
			
		while(!a.empty())
		{
			long long x=a.top();
			long long y=b.top();
			a.pop();
			if(x<y)
			{
				
				b.push(x+y);
			}
			else
			{
				ans+=1;
				break;
			}

		}
		cout<<ans<<endl;
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
