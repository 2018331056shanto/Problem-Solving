#include<bits/stdc++.h>
using namespace std;



void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v(n),x(n);
	long long l=1;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		l=lcm(l,v[i]); 
		
	}
	// cout<<l<<endl;
	for(int i=0;i<n;i++)
	{
		x[i]=l/v[i];
	}


	if(accumulate(x.begin(),x.end(),0ll)<l)
	{
		for(auto y:x)
			cout<<y<<" ";
		cout<<endl;
	}
	else
	{
		cout<<-1<<endl;
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
