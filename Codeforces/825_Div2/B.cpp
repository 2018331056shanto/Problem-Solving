#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a,long long b){
    long long g=__gcd(a,b);
    return (a*b/g);
}

void solve(){
	
	int n;
	cin>>n;
	vector<long long>v(n+2,1);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}	
	

	vector<long long>ans(n+2,1);
	for (int i = 1; i <=n+1; ++i)
	{
		/* code */
		ans[i]=lcm(v[i],v[i-1]);
	}

	for(int i=1;i<=n;i++)
	{
		long long gcd=__gcd(ans[i],ans[i+1]);
		if(gcd!=v[i]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
		
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
