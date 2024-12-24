#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string a,b;
	cin>>a>>b;
	if(a==b)
	{
		cout<<0<<endl;
		return;
	}
	string x="";
	if(a.size()<b.size())
	{
		for(int i=a.size();i<b.size();i++)
		{
			x+="0";
		}
	}
	a=x+a;
	int ans=0;
	for(int i=a.size()-1;i>=0;i--)
	{
		string temp1=a,temp2=b;

		temp2[i]='0';
		temp1[i]='9';
		if(temp2>temp1)
		{
			b[i]='0';
			a[i]='9';
			ans+=9;
		}
		else{

			int x=abs(b[i]-a[i]);
			ans+=x;
			// cout<<x<<endl;
		}
	}

	cout<<ans<<endl;
	// cout<<a<<endl;

	
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}



