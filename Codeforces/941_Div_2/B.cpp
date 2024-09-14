#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m; 
	cin>>n>>m; 

	std::vector<string> v;

	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s; 
		v.push_back(s);
	}

	

	

	int cntBLeft=0;
	for(int i=0;i<n;i++)
	{
		if(v[i][0]=='B')
		{
			cntBLeft++;
		}
	}

	int cntBRight=0;
	for(int i=0;i<n;i++)
	{
		if(v[i][m-1]=='B')
		{
			cntBRight++;
		}
	}
	if((cntBLeft==n&&cntBRight==0)||(cntBLeft==0&&cntBRight==n))
	{
		cout<<"NO"<<endl;
		return;

	}


	int cntBTop=0;
	for(int j=0;j<m;j++)
	{
		if(v[0][j]=='B')
		{
			cntBTop++;
		}
	}

	int cntBBottom=0;
	for(int j=0;j<m;j++)
	{
		if(v[n-1][j]=='B')
		{
			cntBBottom++;
		}
	}

	if((cntBTop==m&&cntBBottom==0)||(cntBTop==0&&cntBBottom==m))
	{
		cout<<"NO"<<endl;
		return ;
	}
	cout<<"YES"<<endl;

	

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
