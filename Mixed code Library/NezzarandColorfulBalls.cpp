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
		int n;
		cin>>n;
		int a[10000];
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		int mx=0;
		for(int i=0;i<=n;i++)
		{

          mx=max(mx,a[i]);
		}
		cout<<mx<<endl;
	}
}