#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x,y,z;
	cin>>x>>y>>z;
	long long ans=y/z+y%z;
	long long l=y/z*z-1;
	if(l>=x)
	{
		ans=max(ans,l/z+l%z);
	}
	cout<<ans<<endl;
	{
		
	};
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