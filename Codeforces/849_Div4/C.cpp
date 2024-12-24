#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	int temp=n-1;
	for(int i=0;i<n/2;i++ )
	{
		if((s[i]=='0'&&s[temp]=='1')||(s[i]=='1'&&s[temp]=='0'))
		{
			cnt++;
			temp--;
		}
		else
		{
			break;
		}
	}
	cout<<(n-(cnt*2))<<endl;

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
