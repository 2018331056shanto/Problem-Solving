#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		if(v[i]<40)
			ans.push_back(v[i]);
		else
		{
			int y=(v[i]/5);
			y=(y+1)*5;
			if(y-v[i]<3)
			{
				ans.push_back(y);
			}
			else
			{
				ans.push_back(v[i]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<endl;
	}
	
}