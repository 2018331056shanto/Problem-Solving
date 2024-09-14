#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	int x=1;
	for(int i=0;i<n;i++)
	{
		cout<<x<<" ";
		x+=3;
	}
	cout<<endl;

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
