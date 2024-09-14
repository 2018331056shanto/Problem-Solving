#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int m,n;
	cin>>m>>n;

	string x,s;
	cin>>x>>s;
	
	int pos=x.find(s);
	if(pos>-1)
	{
		cout<<0<<endl;
	}
	else{
		int cnt=0;
		int y=n;
		bool flag=false;
		while(n<=(y*m))
		{
			cnt++;
			x+=x;
			// cout<<x<<endl;
			pos=x.find(s);	
			n=x.size();
			if(pos>-1)
			{
				flag=true;
				break;
			}
			y++;
		}
		if(flag)
		{
			cout<<cnt<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}

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
