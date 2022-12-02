#include<bits/stdc++.h>
using namespace std;


void solve(){
	long long n;
	cin>>n;
	string s;
	cin>>s;
	vector<long long>v(n);
	long long cnt0=0;
	long long cnt1=0;
	long long consecutive_one=0;
	long long consecutive_zero=0;
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}

	for(int i=0;i<n;i++)
	{
		long long x=s[i]-'0';
		v[i]=x;
		if(v[i]==1)
		{
			cnt1++;
		}
		else{
			cnt0++;
		}
	}

	long long temp=1;
	for(int i=0;i<n-1;i++)
	{
		
		if(v[i]==0&&v[i+1]==0)
		{
			
			++temp;
			consecutive_zero=max(temp,consecutive_zero);

		}
		else
		{
			

			temp=1;
		}

	}
	temp=1;
	for(int i=0;i<n-1;i++)
	{
		
		if(v[i]==1&&v[i+1]==1)
		{
			++temp;
						consecutive_one=max(temp,consecutive_one);

		}
		else
		{
			temp=1;
		}

	}
	// cout<<cnt0<<" "<<cnt1<<" "<<consecutive_one<<" "<<consecutive_zero<<endl;
	cout<<max(cnt1*cnt0,max(consecutive_one*consecutive_one,consecutive_zero*consecutive_zero))<<endl;


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
