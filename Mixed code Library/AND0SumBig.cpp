#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int l=n;
		for(int i=1;i<k;i++)
		{
			n=((n)%mod*l)%mod;
		}
		cout<<n<<endl;
	}
}	