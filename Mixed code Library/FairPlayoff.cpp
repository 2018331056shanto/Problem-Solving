#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		std::vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		sort(v.begin(), v.end());
		int mx2=v[2];
		int k=max(a,b);
		int l=max(c,d);
		if(k==mx2||l==mx2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	