#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a[200005]={-1};
		map<int,std::vector<int>>mp;
		map<int,int>m;
		int n,k;
		cin>>n>>k;
		int tot=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mp[a[i]].push_back(i);
			
		}
		int c=0;
		for(auto x:mp)
		{
			
			if(c>=k)
				c=0;
			if(x.second.size()>k)
			{
				
				for(auto s:x.second)
				{
					//cout<<"up "<<c<<endl;
					if(c<k)
					{
						++c;
						m[s]=c;
						//cout<<c<<endl;
						
					}
					else
					{
						//cout<<"fuck"<<c<<endl;
						m[s]=0;
					}
					
				}
			}
			else
			{
				if(c>=k)
					c=0;
				for(auto s:x.second)
				{
					//cout<<"fuck"<<endl;

					++c;
					m[s]=c;
					if(c==k)
						c=0;
					
					//cout<<c<<" ";
					//cout<<"you"<<endl;
					
					
					
				}
				//cout<<endl;
			}
			//cout<<c<<endl;

			
		}
		for(auto x:m)
		{
			cout<<x.second<<" ";
		}
		cout<<endl;

	}
}	