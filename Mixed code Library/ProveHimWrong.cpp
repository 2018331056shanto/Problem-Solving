#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n>19)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		for(int i=1;i<=1e9;i*=3)
		{
			if(n==0)
			{
				break;
			}
			cout<<i<<" ";
			n--;
		}
		cout<<endl;
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