#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	long long ans=(1<<n);
	cout<<ans-1<<endl;
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