#include<bits/stdc++.h>
using namespace std;

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n+2,0);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	int x;
	x=(v[1]+v[n])%2?v[1]:v[n];
	cout<<n-1<<endl;
	if(n>1){
		cout<<1<<" "<<n<<endl;
	}
	for(int i=2;i<n;i++)
	{
		if((v[i]+x)%2){
			cout<<1<<" "<<i<<endl;
		}
		else
			cout<<i<<" "<<n<<endl;
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
