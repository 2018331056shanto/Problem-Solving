#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	std::vector<int>a(n),b(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	if(a==b)
	{
		cout<<"Bob"<<endl;
	}
	else{

		reverse(b.begin(),b.end());

		if(a==b)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Alice"<<endl;
		}
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