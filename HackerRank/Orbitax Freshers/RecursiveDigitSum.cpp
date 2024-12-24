#include<bits/stdc++.h>
using namespace std;

void superDigit(string s,int &x)
{
	if(s.length()==1)
	{
		x=stoll(s);
		return;
	}

	// cout<<s.length()<<endl;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum+=s[i]-'0';
	}

	// cout<<sum<<endl;
	superDigit(to_string(sum),x);
}

void solve(){
	

	string n;
	long long k;
	cin>>n>>k; 

	
	long long sum=0;
	for(int i=0;i<n.length();i++)
	{
		sum+=n[i]-'0';
	}
	
	string s=to_string((sum*k));
	int ans=0;
	superDigit(s,ans);
	cout<<ans<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
