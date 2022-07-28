#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		long long ans=0;
		long long pp=1;
		for(int j=0;j<31;j++)
		{
			if(k&(1<<j))
			{
				ans=(ans+pp)%mod;
			}
			pp*=n;
			pp%=mod;
		}
		cout<<ans<<endl;
	}
}	