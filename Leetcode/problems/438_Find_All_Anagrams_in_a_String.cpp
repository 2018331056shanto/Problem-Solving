#include<bits/stdc++.h>
using namespace std;

 vector<int> findAnagrams(string s, string p) {
	
	int a[26],b[26];
	memset(a,sizeof(a),0);  
	memset(b,sizeof(b),0);
	for(int i=0;i<s.size();i++)
	{
		a[s[i]-'a']++;
	}
	for(int i=0;i<p.size();i++)
	{
		b[p[i]-'a']++;
	}
	vector<int>aa;
	aa.push_back(1);
	return  aa;
}

void solve(){
	
	vector<int>v=findAnagrams("cbaebabacd","abc");

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
