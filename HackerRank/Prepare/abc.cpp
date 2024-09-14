#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void generateSubset(vector<int>&v,int n,int start,vector<int>&tmp)
{

	
	ans.push_back(tmp);
	

	for(int i=start;i<n;i++)
	{
		tmp.push_back(v[start]);	
		generateSubset(v,n,i+1,tmp);
		tmp.pop_back();
	}

}

void solve(){
	
	int n;
	cin>>n; 

	vector<int>v;

	for(int i=0;i<n;i++)
	{
		v.push_back(i);
	}

	vector<int>tmp;
	generateSubset(v,n,0,tmp);

	cout<<ans.size()<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
