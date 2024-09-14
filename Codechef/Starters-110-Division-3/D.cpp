#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int a,b;
	cin>>a>>b;
	int x,y;
	x=a,y=b;
	int ans=0;
	int ans1=0;
	int yy=1000;
	while(yy--)
	{
		if(a%b==0&&a>0&&b>0)
		{
			break;
		}

		++a;
		--b;
		ans++;
	}
	int xx=1000;
	while(xx--)
	{
		if(x%y==0&&x>0&&y>0)
		{
			break;
		}
		--x;
		++y;
		ans1++;
	}
	cout<<min(ans,ans1)<<endl;

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
