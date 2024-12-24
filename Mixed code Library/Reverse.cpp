#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v(n,0),dup(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	dup=v;
	sort(dup.begin(),dup.end());
	int val=0;
	int idx=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==dup[i])
		{
			continue;
		}
		else
		{
			val=dup[i];
			idx=i;
			break;
		}
	}
	int l=idx;
	int r=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==val)
		{
			r=i;
			break;
		}
	}
	 // cout<<l<<" "<<r<<endl;
	for(int j=0;j<n;j++)
	{
		if(j==l)
		{
			for(int i=r;i>=l;i--)
			{
				cout<<v[i]<<" ";
				j++;
			}
			j--;
		}
		else
		{
			// cout<<j<<endl;
			cout<<v[j]<<" ";
		}

	}
	cout<<endl;
	
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