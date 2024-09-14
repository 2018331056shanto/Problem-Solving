#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int l,r;
	cin>>l>>r;

	int odd=0;
	if(l%2==0&&r%2==0)
	{
		odd+=(r-l)/2;
	}
	else if(l%2==0&&r%2==1)
	{
		odd+=(r-1-l)/2;
		++odd;
	}
	else if(l%2==1&&r%2==0)
	{
		odd+=(r-l-1)/2;
		++odd;
	}
	else if(l%2==1&&r%2==1)
	{
		odd+=(r-1-l-1)/2;
		odd+=2;
	}

	cout<<odd/2<<endl;
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
