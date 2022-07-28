#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int mx=0;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		mx=max(x,mx);
		if(mx==i)
		{
			ans++;
		}
	}
	cout<<ans<<endl;

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