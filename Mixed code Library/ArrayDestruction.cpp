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
		for(int i=0;i<2*n;i++)
		{
			 int x;
			 cin>>x;
			 v.push_back(x);
		}
	    std::vector<pair<int,int>> v1;
		sort(v.begin(),v.end());
		reverse(v.begin(), v.end());
		for(int i=1;i<2*n;i++)
		{
			for(int j=i+1;j<2*n;j++)
			{
				if(v[j]==0)
					continue;
				if(v[i-1]==(v[i]+v[j]))
				{
					cout<<v[i-1]<<" "<<v[i]<<" "<<v[j]<<endl;
				 
				 v1.push_back(make_pair(v[i],v[j]));
				 v[j]=0;
				}

			}
		}
		for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i].first<<" "<<v1[i].second;
		}
		cout<<endl;
	}
}