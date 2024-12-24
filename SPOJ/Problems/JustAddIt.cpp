#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
long long  binpow(long long int a,long long int b)
{
	long long  res=1;
	while(b>0)
	{
		if(b%2)
		{
			res=(res%mod*a%mod)%mod;
		}
		a=(a%mod*a%mod)%mod;
		b/=2;

		
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long int n,k;
	while(cin>>n>>k&&n!=0&&k!=0)
	{
		
		//cout<<n<<k<<endl;
		long long int S=0;
		long long S1=0,S2=0;
			 S=(binpow(n,k)%mod);
			 S1=(2*binpow(n-1,k))%mod;
			 S2=(2*binpow(n-1,n-1))%mod;
		long long s3=(binpow(n,n)%mod);
			 
		long long t=(S+S1+S2+s3)%mod;
		if(t<0)
		{
			cout<<t+mod<<endl;
		}
		else
		{
			cout<<t<<endl;
		}
		

	}
}	