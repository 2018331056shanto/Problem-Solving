#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v;
	bool falg1=false;
	bool falg0=false;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==1)
			falg1=true;
		if(x==0)
			falg0=true;
		v.push_back(x);
		
	}
	
	if(falg0==true&&falg1==true)
	{
		cout<<"NO"<<endl;
		return;
	}
	sort(v.begin(),v.end());
	if(falg1==false)
	{
		cout<<"YES"<<endl;
		return;
	}
	else
	{
		// cout<<"bal"<<endl;
		bool consnum=false;
		for(int i=0;i<n-1;i++)
		{
			int xx=v[i];
			if(v[i+1]==xx+1)
			{
				consnum=true;
				break;
			}
			
		}
		if(consnum)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	