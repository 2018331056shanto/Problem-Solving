#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<int> v[n+1];
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
			
		}
		map<int,int>mp;
		for(int i=1;i<=n;i++)
		{
			int x=v[i].size();
			mp[i]=x;
		}
		for(auto x:mp)
			cout<<x.first<<" "<<x.second<<endl;
		//cout<<33<<endl;
		// for(int i=1;i<=n;i++)
		// {
		// 	//cout<<"fuck"<<endl;
		// 	for(int j=0;j<v[i].size();j++)
		// 	{
		// 		cout<<v[i][j]<<" "; 
		// 	}
		// 	cout<<endl;
		// }
		
		for(int i=1;i<=1;i++)
		{	
			int sz=mp.size();
			int cnt=0;
			//cout<<"lll"<<endl;
			for(auto x:mp)
			{ cnt++;
				//cout<<"fff"<<endl;
				if(x.second==1)
				{
					//cout<<"sss"<<endl;
					int fs=x.first;
					//cout<<"fs "<<fs<<endl;
					mp.erase(fs);
					int val=v[fs][0];
					//cout<<"val "<<val<<endl;
					//cout<<mp[val]<<endl;
					mp[val]--;
					//cout<<mp[val]<<endl;
					vector<int>::iterator it;
					it=remove(v[val].begin(), v[val].end(),fs);
					//cout<<"saa"<<endl;
					v[val].erase(it);


				}
				if(cnt==sz)
					break;
			}
		}
		// for(auto x:mp)
		// 	cout<<x.first<<" "<<x.second<<endl;
		
		// for(int i=1;i<=n;i++)
		// {
		// 	//cout<<"fuck"<<endl;
		// 	for(int j=0;j<v[i].size();j++)
		// 	{
		// 		cout<<v[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		
	}
}	