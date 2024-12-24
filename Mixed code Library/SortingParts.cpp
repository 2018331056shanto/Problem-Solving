#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v(n),v1(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	v1=v;
	sort(v1.begin(),v1.end());
	for(int i=0;i<n;i++)
	{
		if(v[i]!=v1[i])
		{
			cout<<"YES"<<endl;
			return ;
		}
	}
	cout<<"NO"<<endl;
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