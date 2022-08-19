#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	long long ans=1e18;
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	
	for(int i=0;i<n;i++)
	{
		long long sum=0;
		long long prevSum=0;
		for(int j=i-1;j>=0;j--)
		{
			prevSum+=v[j]-prevSum%v[j];
			sum+=prevSum/v[j];
		}
	
		prevSum=0;
		for(int j=i+1;j<n;j++)
		{
			prevSum+=v[j]-prevSum%v[j];
			sum+=prevSum/v[j];
		}
		ans=min(ans,sum);
	}
	cout<<ans<<endl;
}