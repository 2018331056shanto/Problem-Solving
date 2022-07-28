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
		//cout<<n<<endl;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{

			int x;
			cin>>x;
			//cout<<x<<endl;
			v.push_back(x);
			//cout<<v[i];
		}
		sort(v.begin(), v.end());
		if(n==1)
			cout<<v[0]<<endl;
		else
		{
			if(v[0]<0)
		{
			int y=v[0];
			//cout<<v[0]<<endl;
			for(int j=0;j<n;j++)
			{

				int x=v[j];
				
				//cout<<x<<" "<<y<<endl;
				v[j]=x-y;
				//cout<<v[j]<<endl;
			}
		}
		//cout<<v[0]<<v[1]<<endl;
		int mx=v[0];
		for(int i=0;i<n-1;i++)
		{
			int l=v[i+1]-v[i];
			mx=max(l,mx);
		}
		cout<<mx<<endl;
		}
		
	}
}	