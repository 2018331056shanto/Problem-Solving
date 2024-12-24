#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n%2050)
		{
			cout<<"-1"<<endl;
		}
		else
		{

			n/=2050;
			int ans=0;
			while(n>0)
			{
				ans+=n%10;
				n/=10;
			}
			cout<<ans<<endl;
		}
	}
}	