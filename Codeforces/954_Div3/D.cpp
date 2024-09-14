#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	string s;
	cin>>s;
	int ans=INT_MAX;

	vector<int>v(n);
	int flag=0; 
	int cnt1=0;
	for(int i=0;i<n;i++)
	{
		v[i]=s[i]-'0';
		if(v[i]==0)
		{
			flag=true;
		}
		if(v[i]==1)
		{
			cnt1++;
		}
	}

	
	{
		vector<int>a(n);


		for(int i=0;i<n-1;i++)
		{
					int cnt=0;

			// cout<<cnt<<endl;
			for(int j=0;j<n;j++)
			{
				if(i==j){
					a[cnt++]=v[j]*10+v[j+1];
					++j; 

				}
				else
				{
					a[cnt++]=v[j];
				}
			}
			int val=0;
		for(int k=0;k<cnt;k++)
		{
			if(a[k]==0)
			{
				val=-1;
				break;
			}
			if(a[k]==1)
				continue;

			val+=a[k];
		}

		if(!val)
			val=1;
		if(val==-1)
			val=0;

		ans=min(ans,val);
		}

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
