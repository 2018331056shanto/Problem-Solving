#include<bits/stdc++.h>
using namespace std;

int steadyGene(string &s)
{
	int val=s.length()/4;
	int mn=s.length();

	map<char,int>mp;

	for(auto x:s)
	{
		mp[x]++;
	}
	if(mp['A']==val&&mp['C']==val&&mp['T']==val&&mp['G']==val)
		return 0;

int left=0;
		int right=0;
	while(1)
	{
		

		while(mp['A']>val||mp['C']>val||mp['T']>val||mp['G']>val)
		{
			// cout<<"r  "<<right<<" "<<s[right]<<endl;
			mp[s[right]]--;
			right++;

			if(right==s.length())
				break;

		}

		if(right==s.length())
			break;



		while(mp['A']<=val&&mp['C']<=val&&mp['T']<=val&&mp['G']<=val)
		{
			mp[s[left]]++;
			left++;
		}


	  if((right-left+1)<mn)
	  {
	  	mn=(right-left+1);
	  }
	}
	return mn;
}

void solve(){
	
	int n;
	cin>>n; 
	string s;
	cin>>s; 

	cout<<steadyGene(s)<<endl;
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
