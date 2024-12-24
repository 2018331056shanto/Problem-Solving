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
		std::vector<int>ev,od;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int x;
			cin>>x;
			if(x%2==0)
			{
				ev.push_back(x);
			}
			else
			{
				od.push_back(x);
			}

		}
        ev.insert(ev.end(),od.begin(),od.end());
		int ans=0;
		for (int i=0;i<n;++i)
		{
			if(ev[i]%2==0)
			{
				ans+=(n-i-1);
			}
			else
			{
				for(int j=i+1;j<n;j++)
				{
					int x=__gcd(ev[i],2*ev[j]);
					if(x>1)
					{
						ans++;
					}
				}
			}
			// for(int j=i+1;j<n;j++)
			// {
			// 	int x=__gcd(ev[i],2*ev[j]);
			// 	if(x>1)
			// 	{
			// 		ans++;
			// 	}
			// }
		}
			
		cout<<ans<<endl;
	}
}	