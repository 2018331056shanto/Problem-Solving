#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[100008];
struct  
{
	int l,r;
	void pp(int x,int y)
	{
		l=x;
		r=y;
	}
	
}ar[100008];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int x,y;
			cin>>x>>y;
			ar[i].pp(x,y);
		}
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		
	}
}	