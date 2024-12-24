#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m; 
	string s;
	cin>>s;

	set<int>st;

	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x; 
		// cout<<"x : "<<x<<endl;
		st.insert(x);
	}

	vector<int>idxs;
	for(auto x:st){
		// cout<<x<<" ";
		idxs.push_back(x);
	}
	// cout<<endl;

	string c;
	cin>>c; 

	sort(c.begin(),c.end());
	// cout<<c<<endl;
	
	for(int i=0;i<idxs.size();i++)
	{
		// cout<<idxs[i]<<endl;
		int x=idxs[i]-1;
		// cout<<x<<endl;
		// cout<<s[x]<<endl;
		s[x]=c[i];
	}

	cout<<s<<endl;

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
