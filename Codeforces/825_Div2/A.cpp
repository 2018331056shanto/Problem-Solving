#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	vector<int>a(n),b(n);
	int onea=0,oneb=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i])
			onea++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		if(b[i])
			oneb++;
	}
	int sum=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		sum+=(a[i]^b[i]);
		if(a[i]!=b[i])
		{
			cnt++;
		}

	}
	if(sum==0)
	{
		cout<<0<<endl;
	}
	else
	{
		if(onea==oneb)
		{
			cout<<1<<endl;
		}
		else{
				int diff=abs(onea-oneb);
				if(diff==cnt)
				{
					cout<<diff<<endl;
				}	
				else{
					cout<<diff+1<<endl;
				}
		}

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
