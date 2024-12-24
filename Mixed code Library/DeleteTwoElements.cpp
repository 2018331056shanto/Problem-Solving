#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int  main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll sum=0;
		std::vector<ll> v(n,0);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}

		
		{
			sort(v.begin(),v.end());
			if(v[0]==v[n-1])
			{
				cout<<(n-1)*2<<endl;
			}
			else
			{
				double find=((double)2*sum/(double)n);
				if(find!=(int)find)
				{
					cout<<0<<endl;
					continue;
				}
			ll cnt=0;
			for(int i=0;i<n;i++)
			{
				//cout<<find<<endl;
				
				ll f=find-v[i];
				//cout<<f<<endl;
			   bool s=binary_search(v.begin(),v.end(),f);
			   if(s)
			   {
			   	//cout<<f<<endl;
			   	 ll up=upper_bound(v.begin(),v.end(),f)-v.begin();
				ll low=lower_bound(v.begin(),v.end(),f)-v.begin();
				//cout<<up<<" "<<low<<endl;
				cnt+=up-low;
			   }
				
				//cout<<cnt<<endl;		
			}	
			cout<<cnt/2<<endl;
		}
			}
			

	}
}	