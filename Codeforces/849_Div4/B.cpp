#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;


	int x,y;
	x=y=0;
	for(auto c:s)
	{
		if(c=='U')
		{
			y++;
		}
		else if(c=='D')
		{
			y--;
		}
		else if(c=='L')
		{
			x--;
		}
		else {
			x++;
		}

		// cout<<x<<" "<<y<<endl;
		if(x==1&&y==1)
		{
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;

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
