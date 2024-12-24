#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n;
	cin>>n;
	std::vector<long long> v;


if(n==1)
{
	cout<<1<<endl;
	cout<<n<<endl;
	return;
}
if((n&(n-1))==0)
{
	cout<<1<<endl;
	cout<<n<<endl;
	return; 
}

	for(int i=0;i<64;i++)
	{
		if(n&(1ll<<i))
			v.push_back(i);
	}	
	

	cout<<v.size()+1<<endl;
	for (int i = v.size() - 1; i >= 0; i--) {
        cout << n - (int64_t(1) << v[i]) << " ";
      }
	cout<<n<<endl;
	// // cout<<endl;

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
