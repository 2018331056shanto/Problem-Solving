#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	long long sum=0;
	multiset<long long>p;
	std::vector<long long> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
		sum+=x;
	}
	p.insert(sum);
	multiset<long long>q(v.begin(),v.end());
	while(!p.empty())
	{
		long long  x=*--p.end();
		if(x<*--q.end())
		{
			break;
		}
		p.erase(--p.end());
		if(q.find(x)!=q.end())
		{
			q.erase(q.find(x));
		}
		else
		{
			p.insert(x/2);
			p.insert((x+1)/2);
		}

	}
	cout<<(q.empty()?"YES":"NO")<<endl;
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