#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n; 
	cin>>n; 

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}


	long long last=0; 
	int ans=0; 


	for(int i=1;i<n;i++)
	{
		long long v1=v[i-1];
		long long v2=v[i];

		int cnt1=0;
		int cnt2=0;

		if(v2==1&&v1>1)
		{
			cout<<-1<<endl;
			return ;
		}

		while(v2<v1)
		{
			v2*=v2;
			cnt2++;

		}


		while(v1*v1<=v2)
		{
			if(v1==1)
			{
				cnt1=-1; 
				break;
			}

			v1*=v1;
			cnt1++;
		}


		if(cnt2)
		{
			last+=cnt2;
		}

		else if(cnt1==-1)
		{
			last=0; 
		}

		else
		{
			last=max(0ll,last-cnt1);
		}

		ans+=last;
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
