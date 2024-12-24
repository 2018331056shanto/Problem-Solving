#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long n,k;
	cin>>n>>k;
	vector<long long>v(n,0);

	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		// cout<<x<<endl;
		v[i%k]=max(x,v[i%k]);
	}
	long long sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=v[i];
	}
	cout<<sum<<endl;
	v.clear();
}


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}