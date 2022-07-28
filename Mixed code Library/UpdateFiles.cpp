#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		if(n==1)
			cout<<0<<endl;
		else if(k==1)
			cout<<n<<endl;
		else
		{
			long long p=1;
			int cnt=0;
			for(int i=1;i<32;i++)
			{
				if(p>=k)
				{
					break;
				}
				p=pow(2,i);
				cnt++;
			}
			long long int x=n-p;
			long long int ans=cnt+ceil((double)x/(double)k);
			cout<<ans<<endl;
		}
	}
}	