#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	bool ok=true;

	a='$'+a;
	b='$'+b;

	for(int i=1;i<=n;i++)
	{
		if(a[i]!=char('1'-b[i]+'0'))
		{
			ok=false;
			break;
		}
	}

	ok=ok || (a==b);

	if(!ok)
	{
		cout<<"No"<<endl;
		return;
	}


	vector<pair<int,int>>v;

	if(a[1]!=b[1])
	{
		v.push_back({1,n});
		a=b;
	}

	vector<int>cnt(n+1);

	for(int i=1;i<=n;++i)
	{
		if(a[i]=='1')
		{
			if(i==1)
			{
				v.push_back({1,n});
				v.push_back({2,n});
			}
			else{
			cnt[i]++;
			cnt[i-1]++;
		}
		}
		
	}
	

	for(int i=1;i<=n;++i)
	{
		if(cnt[i]%2==1)
		{
			v.push_back({1,i});
		}
	}
	cout<<"Yes"<<endl;
	cout<<v.size()<<endl;
	for (int i = 0; i <v.size() ; ++i)
	{
		/* code */
		cout<<v[i].first<<" "<<v[i].second<<endl;
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
