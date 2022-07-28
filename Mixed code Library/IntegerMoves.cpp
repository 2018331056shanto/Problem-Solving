#include<bits/stdc++.h>
using namespace std;
void solve()
{
	double x,y;
	cin>>x>>y;
	int d=x*x+y*y;
	if(d==0)
	{
		cout<<0<<endl;
		return ;
	}
	int z=0;
	while(z*z<d)
		z++;

	if(z*z==d)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<2<<endl;
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