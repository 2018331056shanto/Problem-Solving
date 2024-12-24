#include<bits/stdc++.h>
using namespace std;


void solve(){


	int n;
	cin>>n;
	string s;
	cin>>s;
	long long p=-1;
	long long ss=0;
	for(int i=n-1;i>=0;i--)
	{
		++p;
		long long x=s[i]-'0';
		// cout<<x<<endl;
		ss+=x*pow(2,p);
			
	}
	// cout<<ss<<endl;
	long long ans=0;
		long long temp=ss;
	for(int i=n-1;i>=0;i--)
	{
	

		if(s[i]=='1')
		{
			temp-=1;
			temp/=2;
			
		}
		else{
			temp/=2;
		}
		cout<<"temp :"<<temp<<endl;
		long long Xor=ss^temp;
		cout<<ss<<" "<<Xor<<endl;
		ans=max(Xor,ans);

	}
	cout<<ans<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		// {
			solve();
		// }
	}
