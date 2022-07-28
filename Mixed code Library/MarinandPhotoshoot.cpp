#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	
	for(int i=0;i<n-1;i++)
	{
		int zero1=-10;
	    int zero2=-10;
		if(s[i]=='0')
		{
			zero1=i;
			for(int j=i+1;j<n;j++)
			{
				if(s[j]=='0')
				{
					zero2=j;
					break;
				}
			}
		}
		// cout<<zero2<<" "<<zero1<<endl;
		if(zero2-zero1==1)
		{
			ans+=2;
		}
		else if(zero2-zero1==2)
		{
			ans++;
		}
		else
		{
			continue;
		}
	}
	cout<<ans<<endl;
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