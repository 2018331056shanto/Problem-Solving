#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;

	if(n%k!=0)
	{
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else{

		cout<<2<<endl;
		cout<<n+k-1<<" "<<-k+1<<endl;
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
