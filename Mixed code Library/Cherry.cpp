#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<long long> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];

		}
		long long x=0;
		for(int i=0;i<n-1;i++)
		{
			x=max(x,v[i]*v[i+1]);

		}
		cout<<x<<endl;
	}
}	