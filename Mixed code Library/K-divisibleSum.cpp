#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n==1)
		{
			cout<<k<<endl;
		}
		else
		{
			if(k==n)
			{
				cout<<"1"<<endl;
			}
			else if(k<n)
			{
				cout<<""
			}
		}
	}
}