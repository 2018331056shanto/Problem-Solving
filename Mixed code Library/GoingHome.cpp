#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[n+10];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	std::vector<pair<int,pair<int,int>>>v[2200];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			//cout<<i<<" "<<j<<endl;
			int l=(a[i]+a[j])%2131;
			int val=a[i]+a[j];
			if(v[l].size()!=0)
			{
				//cout<<l<<endl;
				if(v[l].size()>=4)
				{

					for(int k=0;k<v[l].size()-3;k++)
					{
						if(v[l][k].first==v[l][k+1].first&&v[l][k+1].first==v[l][k+2].first&&v[l][k+2].first==v[l][k+3].first)
							
						if(v[l][k].second.first==v[l][k+1].second.first&&v[l][k+1].second.first==v[l][k+2].second.first&&v[l][k+2].second.first==v[l][k+3].second.first)
						{
							cout<<"YES"<<endl;
						
						cout<<v[l][k].second.second<<" "<<v[l][k+1].second.second<<" "<<v[l][k+2].second.second<<" "<<v[l][k+3].second.second<<endl;
						return 0;
						}
					}
				}
				for(int k=0;k<v[l].size();k++)
				{
					if(val==v[l][k].first)
					{
						//cout<<i<<" "<<v[l][k].second.second<<" "<<j<<" "<<v[l][k].second.first<<endl;
						if(i!=v[l][k].second.second&&j!=v[l][k].second.first&&j!=v[l][k].second.second&&i!=v[l][k].second.first)
						{
							//cout<<i<<" "<<v[l][k].second.second<<" "<<j<<" "<<v[l][k].second.first<<endl;
							cout<<"YES"<<endl;
							cout<<i<<" "<<j<<" "<<v[l][k].second.first<<" "<<v[l][k].second.second<<endl;
							return 0;
						}

					}
				}
				v[l].push_back({val,{i,j}});
				
			}
			else
			{
				v[l].push_back({val,{i,j}});
			


			}
			
		}
	}

	cout<<"NO"<<endl;
	
}	

