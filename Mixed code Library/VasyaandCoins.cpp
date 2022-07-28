#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x,y;
	cin>>x>>y;
	if(x==0)
	{
		cout<<1<<endl;
	}
	else if(y==0)
	{
		cout<<x+1<<endl;
	}
	else
	{
		cout<<x+y*2+1<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	