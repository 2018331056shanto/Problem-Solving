#include<bits/stdc++.h>
using namespace std;

int cnt=0;

bool check2(vector<int>&v,int start,int end, int inc)
{
	for(int i=start;i<=end-inc;i+=inc)
	{
		// cout<<"hello :"<<i<<" "<<i+inc<<endl;
		int y=abs(v[i]-v[i+inc]);
		if(y!=inc)
		{
			
			return false;
		}
		if(v[i]>v[i+inc])
		{
			swap(v[i],v[i+inc]);
			cnt++;
			
		}
		i+=inc;
	}
	return true;
}

void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n+1);
	for (int i = 1; i <=n; ++i)
	{
		cin>>v[i];
		/* code */
	}
	
	
	int pow=1;
	// cout<<"pow :"<<pow<<endl;
	while(pow<=n)
	{

		if(!check2(v,1,n,pow)){
			cout<<-1<<endl;
			return;
		};
		pow=pow<<1;
		// cout<<pow<<endl;
	}
	
	// for(auto x:v)
	// 	cout<<x<<" ";
	// cout<<endl;
	
	cout<<cnt<<endl;
	cnt=0;
	

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
