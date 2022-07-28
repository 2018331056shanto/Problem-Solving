#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n>>l>>r;
		int a[200020]={0};
		long long int ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			ans+=upper_bound(a+i+1,a+n+1,r-a[i])-lower_bound(a+i+1,a+n+1,l-a[i]);
		}
		cout<<ans<<endl;


	}
}	