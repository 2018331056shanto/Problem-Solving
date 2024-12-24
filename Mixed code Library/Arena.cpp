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
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);

		}

		sort(v.begin(),v.end());
		int cnt=0;
		int d=v[0];
		for(int i=0;i<n;i++)
		{
			if(v[i]==d)
			{
				cnt++;
			}
		}
		//cout<<cnt<<endl;
		if(v[0]==v[v.size()-1])
		{
			cout<<"0"<<endl;
		}
		else
		{
			if(cnt>0)
			{
				cout<<v.size()-(cnt)<<endl;
			}
			else
			{
				cout<<v.size()-1<<endl;
			}
		}
	}
}