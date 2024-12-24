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
		if(n<9)
			cout<<0<<endl;
		else if(n==9)
			cout<<1<<endl;
		else
		{
			int ans=0;
			ans=n/10;
			if(n%10==9)
				ans+=1;
			cout<<ans<<endl;
		}
	}
}	