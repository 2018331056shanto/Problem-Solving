#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int a,b,c;
	cin>>a>>b>>c;
	if(a==b&&b==c)
	{
		cout<<"YES"<<endl;
		return;
	}

	priority_queue<int>pq;
	pq.push(a);
	pq.push(b);
	pq.push(c);
	int mn=min(a,min(b,c));
		map<int,int>mp;
		mp[a]++;
		mp[b]++;
		mp[c]++;
	int cnt=0;
	while(cnt<3)
	{
		if(mp.size()==1)
		{
			break;
		}
		// cout<<"sz :"<<mp.size()<<endl;
		cnt++;
		int t=pq.top();
		pq.pop();
		if(mp[t]>1)
		{
			mp[t]--;
		}
		else
		{
			mp.erase(t);
		}
		pq.push(t-mn);
		pq.push(mn);
		mp[t-mn]++;
		mp[mn]++;
		// cout<<t<<" "<<t-mn<<" "<<mn<<endl;
	}


	while(!pq.empty())
	{
		mp[pq.top()]++;
		pq.pop();
	}
	if(mp.size()>1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
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
