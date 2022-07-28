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
		vector<int>s;
		bool flag=false;
		int mx=-1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			s.push_back(x);
			mx=max(x,mx);
			if(x<0)
				flag=true;
		}
		if(flag)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			cout<<mx+1<<endl;
			for(int i=0;i<=mx;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;

		}
	}
}	