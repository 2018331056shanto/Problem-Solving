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
		int cnt0,cnt1;
		cnt0=cnt1=0;
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
			if(x==0)
			{
				cnt0++;
			}
			if(x==1)
			{
				cnt1++;
			}
		}
		long long ans=0;
		ans=pow(2,cnt0);
		cout<<ans*cnt1<<endl;
	}
}	