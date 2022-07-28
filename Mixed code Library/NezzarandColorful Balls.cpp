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
		set<int>s;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			s.insert(x);
		}
		int l=s.size();
		if(l==n)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<n-l<<endl;
		}
	}
}