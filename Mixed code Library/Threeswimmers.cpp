#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int p,a,b,c;
		cin>>p>>a>>b>>c;
		long long int k,l,m;
		k=a-(p%a);
		l=b-(p%b);
		m=c-(p%c);
		if(p%a==0||p%b==0||p%c==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			long long int ans=min(k,min(l,m));
		cout<<ans<<endl;
		}
		
	}
}	