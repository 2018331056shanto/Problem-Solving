#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	if(n==1&&v[0]!=1)
	{
		cout<<"NO"<<endl;
		return; 
	}
	else
	{
		if(v[0]-v[1]>1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
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