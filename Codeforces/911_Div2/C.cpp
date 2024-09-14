#include<bits/stdc++.h>
using namespace std;

void dfs(string &s,vector<int>&l,vector<int>&r,int &mn,int start,int op)
{

	// cout<<start<<" "<<op<<endl;
	if(l[start]==0&&r[start]==0)
	{
		mn=min(mn,op);
		return;
	}

	

	if(r[start]!=0)
		dfs(s,l,r,mn,r[start],(s[start-1]=='R')?op:op+1);	
	
	if(l[start]!=0)
		dfs(s,l,r,mn,l[start],(s[start-1]=='L')?op:op+1);	

	// dfs(s,l,r,mn,l[start],(s[start-1]=='U')?op+1:op+1);

	
	


}

void solve(){

	int n;
	cin>>n;

	string s;
	cin>>s;

	vector<int>l(n+1),r(n+1);


	for(int i=1;i<=n;i++)
	{
		cin>>l[i]>>r[i];
	}
	int mn=INT_MAX;


	dfs(s,l,r,mn,1,0);

	cout<<mn<<endl;
	


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
