#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long n,B,x,y;
	cin>>n>>B>>x>>y;
	long long sum=0;
	std::vector<long long>v;
	for(int i=0;i<n;i++)
	{
		if(sum+x<=B)
		{
			sum+=x;
			v.push_back(sum);
		}
		else
		{
			sum-=y;
			v.push_back(sum);
		}
	}
	sum=0;
	for(int i:v)
	{
		// cout<<i<<endl;
		sum+=i;
	}
	cout<<sum<<endl;
	
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