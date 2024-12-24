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
		int ar[n];
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
		}
		int i;
		bool flag=false;
		std::vector<int> v;
		for(i=1;i<=n;i++)
		{
			if(ar[i]==0)
			{
				v.push_back(i);
			}
			else
			{
				v.push_back(n+1);
				//cout<<"go"<<endl;
				flag=true;
				break;
			}

		}
		for(int k=0;k<v.size();k++)
		{
			//cout<<"fu"<<endl;
			cout<<v[k]<<" ";
		}
		if(flag)
		{
			//cout<<"bb"<<endl;
			for(int j=i;j<=n;j++)
		{
			cout<<j<<" ";
		}cout<<endl;
		}
		else
		{
			//cout<<i<<endl;
			//cout<<"hh"<<endl;
				for(int j=i;j<=n+1;j++)
		{
			cout<<j<<" ";
		}cout<<endl;
		}
		
		
		
	}
}	