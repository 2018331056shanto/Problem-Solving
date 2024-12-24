#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string a,b;
	cin>>a>>b;
	bool flag=false;
	for(int i=0;i<a.length()-1;i++)
	{
		
		if(a[i]=='0'&&b[i]=='0'&&a[i+1]=='1'&&b[i+1]=='1')
			flag=true;
	}
	if(!flag)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
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
