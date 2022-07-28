// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,k;
// 		cin>>n>>k;
// 		std::vector<int> v[n+1];
// 	}
// }	
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
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{

			cin>>v[i];
			cout<<v[i];
		}
		sort(v.begin(), v.end());
		if(n==1)
			cout<<v[0]<<endl;
		else
		{
			if(v[0]<0)
		{
			for(int i=0;i<n;i++)
			{
				v[i]=v[i]+v[0];
			}
		}
		int mx=-1;
		for(int i=0;i<n-1;i++)
		{
			int l=v[i+1]-v[i];
			mx=max(l,mx);
		}
		cout<<mx<<endl;
		}
		
	}
}	