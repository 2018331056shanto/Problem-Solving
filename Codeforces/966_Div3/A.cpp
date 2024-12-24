#include<bits/stdc++.h>
using namespace std;

void returnRem(int n,int mod)
{
	int rem=n%mod;
	cout<<n<<" "<<rem<<endl;
			if(rem>=2)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
}

void solve(){
	int n;
	string s;
	cin>>s; 
	if(s[0]=='1'&&s[1]=='0'&&s[2]!='0')
	{
		if(s[2]-'0'>=2)
		{
			cout<<"Yes"<<endl;
		}
		else if(s.length()>3)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	else
	{
		cout<<"No"<<endl;
	}


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
