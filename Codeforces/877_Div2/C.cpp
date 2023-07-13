#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m;


	vector<vector<int>>v(n,vector<int>(m));

	if(m%2==0)
	{
		int count=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				v[i][j]=count;
				count++;
			}
		}
	}
	else{


	int coldef= ceil((double)n*(double)m/((double)n*(double)2));
	// cout<<coldef<<endl;
	int cnt=1;
	
	int idx=0;
	for(int j=0;j<coldef;j++)
	{	if(j!=0)
		{
			cnt=v[0][idx]+(2*n);
			idx++;
		}
		for(int i=0;i<n;i++)
		{
			v[i][j]=cnt;
			cnt++;
		}

	}

	int coldif=m-coldef;
	cnt=0;

	idx=0;
	for(int j=coldif+1;j<m;j++)
	{
		cnt=v[0][idx]+n;
		idx++;
		for(int i=0;i<n;i++)
		{
			v[i][j]=cnt;
			cnt++;
		}
	}
}
	for(auto x:v)
	{
		for(auto y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
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
