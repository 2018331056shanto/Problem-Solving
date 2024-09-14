#include<bits/stdc++.h>
using namespace std;


string reversea(string s,int l,string em)
{
	

	em+=s[l];

	if(l==0)
	{
		// cout<<em<<endl;
		return em;
	}

	
	return reversea(s,l-1,em);

}

void solve(){

	string s;
	cin>>s;

	cout<<reversea(s,s.length()-1," ")<<endl;
	
	// int a,b;
	// a=5,b=10;

	// a=a^b;
	// b=a^b;
	// a=a^b;
	
	// cout<<a<<" "<<b<<endl;
	
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
			// bool ans=solve(t);
			// cout<<ans<<endl;
		}
	}
