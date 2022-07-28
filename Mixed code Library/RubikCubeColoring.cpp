#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long binpow(long long a ,long long b)
{
	if(b==0)
	{
		return 1;
	}
	long long ans=binpow(a,b/2);
	ans*=ans;
	ans%=mod;
	if(b%2)
	{
		ans*=a;
	}
	return ans%mod;

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long k;
	cin>>k;
	k=(1ll<<k)-2;
	long long ans=binpow(4,k);
	ans*=6;
	cout<<ans%mod<<endl;
}