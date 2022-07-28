#include<bits/stdc++.h>
using namespace std;
long long fact[10000];
#define mod 998244353
void solve()
{
	int n;
	cin>>n;
	if(n%2)
		cout<<0<<endl;
	else
	{
		cout<<(fact[n/2]*fact[n/2])%mod<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	fact[0]=1;
	for(int i=1;i<=1000;i++)
	{
		fact[i]=((fact[i-1]%mod)*i)%mod;
	}
	// for(int i=0;i<=1000;i++)
	// {
	// 	cout<<fact[i]<<endl;
	// }
	while(t--)
	{
		solve();
	}
}	