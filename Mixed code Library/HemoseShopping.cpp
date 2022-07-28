#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,r;
		cin>>n>>r;
		std::vector<int> v(n,0),v1(n,0);
		for(int i=0;i<n;i++)
		{ 
			cin>>v[i];

		}
		v1=v;
		sort(v1.begin(),v1.end());
		if(n>=2*r)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool flag=true;
			for(int i=0;i<n;i++)
			{
				if(i>=r)continue;
				if(n-i-1>=r)continue;
				if(v1[i]==v[i])
				{
					flag=true;
				}
				else
				{
					flag=false;
					break;
				}
			}
			cout<<(flag?"YES":"NO")<<endl;
		}

	}
}	