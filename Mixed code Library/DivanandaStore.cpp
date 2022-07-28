#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r,k;
		cin>>n>>l>>r>>k;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x>=l&&x<=r)
				v.push_back(x);
		}
		int ans=0;
		sort(v.begin(), v.end());
		int sum=0;
		
		for(int i=0;i<v.size();i++)
		{
			sum+=v[i];
			if(sum<=k)
			{
				//cout<<sum<<endl;
				ans++;
			}
			else{
				break;
			}
		}
		cout<<ans<<endl;
	}
	
}