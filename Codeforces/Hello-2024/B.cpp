#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;


	int plus=0;
	int minus=0;

	for(int i=0;i<n;i++)
	{
		if(s[i]=='+')
		{
			plus++;
		}
		else
		{
			minus++;
		}
	}


	if(plus==n||minus==n)
	{
		cout<<n<<endl;
	}
	else{


		int reduce=min(plus,minus)*2;

		cout<<n-reduce<<endl;
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
