#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s; 

	vector<int>v;
	for(int i=n-1;i>=0;i--)
	{
		if(v.empty()||s[i]>=s[v.back()])
		{
			v.push_back(i);
		}

	}

	reverse(v.begin(),v.end());


	
	for(auto x:v)
	{
		cout<<s[x]<<endl;
	}

	int j=0;
	while(j<v.size()&&s[v[0]]==s[v[j]])
	{
		j++;
	}

	// cout<<j<<endl;
	int ans=v.size()-j;



	for(int i=0;i<v.size()-1-i;i++)
	{
		swap(s[v[i]],s[v[v.size()-1-i]]);
	}


	if(!is_sorted(s.begin(),s.end()))
	{
		ans=-1;
	}

	cout<<ans<<endl;

	
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
