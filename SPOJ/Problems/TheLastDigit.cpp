#include<bits/stdc++.h>
using namespace std;
void binpow(long long int a,long long int b)
{
	long long  res=1;
	while(b>0)
	{
		if(b%2)
		{
			res=(res%10*a%10)%10;
		}
		a=(a%10*a%10)%10;
		b/=2;

		
	}
	cout<<res<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		binpow(a,b);
	}
}	