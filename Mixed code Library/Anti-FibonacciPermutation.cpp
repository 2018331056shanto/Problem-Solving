#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i=n;i>=1;i--)
	{
		cout<<i<<" ";
		v.push_back(i);
	}
	cout<<endl;
	int x=1;
	for(int i=0;i<n-1;i++)
	{
		cout<<x<<" ";
		for(int j=0;j<n;j++)
		{
			if(v[j]==x)
			{
				continue;
			}
			else
			{
				cout<<v[j]<<" ";
			}
		}
		cout<<endl;
		x++;

	}

	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	