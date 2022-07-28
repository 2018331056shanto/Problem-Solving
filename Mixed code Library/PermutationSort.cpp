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
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int cnt=0;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]>v[i+1])
			{
				cnt++;
				
			}
			
		}
		if(cnt==0)
		{
			cout<<0<<endl;
		}
		else if(v[0]==1||v[n-1]==n)
		{
			cout<<1<<endl;
		}
		else if(v[0]==n&&v[n-1]==1)
		{
			cout<<3<<endl;
		}
		else 
		{
			cout<<2<<endl;
		}
	}
}	
