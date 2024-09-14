#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k; 
	cin>>n>>k; 

	std::vector<int> v(n);

	if(n==1)
	{
		cout<<k<<endl;
	}
	else
	{

		int msb=0; 

		for(int i=0;i<31;i++)
		{
			if(k&(1<<i))
			{
				msb=i; 
			}
		}

		v[0]=(1<<msb)-1;
		v[1]=(k-v[0]);

		for(int i=2;i<n;i++)
		{
			v[i]=0;
		}

		for(auto x:v)
			cout<<x<<" ";

		cout<<endl;

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
