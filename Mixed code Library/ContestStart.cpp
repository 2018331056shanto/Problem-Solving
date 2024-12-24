#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int n,x,t;
		cin>>n>>x>>t;
		long long int l=t/x;
		if(l>=n)
		{
			cout<<n*(n-1)/2<<endl;
		}
		else
		{
			cout<<n*l-l*(l+1)/2<<endl;
		}

	}

	
}	