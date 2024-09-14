#include<bits/stdc++.h>
using namespace std;

bool good(vector<int>&g)
{
	int gc=0;

	for(int i=0;i<g.size()-1;i++)
	{
		int cur_g=__gcd(g[i],g[i+1]);

		if(gc>cur_g)
		{
			return false;

		}
		gc=cur_g;
	}
	return true;

}


void solve(){
	
	int n;
	cin>>n; 

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int to_del=-1;
	int g=0;

	for(int i=0;i<n-1;i++)
	{
		int cur_g=__gcd(v[i],v[i+1]);
		if(g>cur_g)
		{
			to_del=i;
			break;
		}
		g=cur_g;

	}

	if(to_del==-1)
	{
		cout<<"YES"<<endl;
		return;
	}
	vector<int>g1=v,g2=v,g3=v;

	bool flag=false;


	g1.erase(g1.begin()+to_del-1);
	g2.erase(g2.begin()+to_del);
	g3.erase(g3.begin()+to_del+1);

	flag= good(g1)||good(g2)||good(g3);

	if(flag)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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
