#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	// cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<>());

	printf("%d\n",v[0]+v[1]);
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