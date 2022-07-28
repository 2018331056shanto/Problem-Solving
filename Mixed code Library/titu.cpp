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
		double  mn=1e7;
		double mx=-1;
		for(int i=0;i<n;i++)
		{
			double x;
			cin>>x;
			mn=min(x,mn);
			mx=max(x,mx);
		}
		
	}
}	