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
	int x=count(v.begin(),v.end(),1);
	// cout<<x<<endl;
	if(count(v.begin(),v.end(),1)!=1)
	{
		cout<<"NO"<<endl;
		return ;
	}
	int idx=find(v.begin(),v.end(),1)-v.begin();
	// cout<<idx<<endl;
	rotate(v.begin(),v.begin()+idx,v.end());
	for(int i=1;i<n;i++)
	{
		if(v[i]-v[i-1]>1)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	// for(auto x:v)
	// 	cout<<x<<" ";
	cout<<"YES"<<endl;

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