#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007



		//a^p % M
long long BigMod(long long a, long long p, long long M=MOD){
    if(!p) return (1%M);
    long long x=BigMod(a, p/2, M);
    x=(x*x)%M;//Overflow?
    if(p&1) x=(x*a)%M;
    return x;
}
 
//inv of n % M
long long getInv(long long n, long long M=MOD){
    return BigMod(n, M-2, M);
}

void solve(){
	
	long long ans=0;
	int n,m;
	cin>>n>>m;
	set<int>s;
	map<int,int>mp;
	vector<int>v;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
		mp[x]++;
	}


if(m==1)
{
	cout<<n<<endl;
	return;
}
	for(auto x:s)
	{
		v.push_back(x);
	}


	
	int idx=0;
	long long extra=1;
	for(int i=0;i<v.size();i++)
	{

		if(mp[v[i]]>1)
		{
			extra= (extra  * mp[v[i]])%MOD;
		}

		if((i-idx)%(m-1)==0&&i!=0)
		{
			// cout<<i<<" "<<idx<<" "<<extra<<endl;

			if((v[i]-v[idx])<m){

				// cout<<"diff :"<<v[i]-v[idx]<<endl;
				if(extra==1)
				{
					ans++;
				}
				else
				{
					ans=(ans+extra)%MOD;
				}
				extra=(extra * getInv( mp[v[idx]]))%MOD;

				idx++;
			}
			else{
				if(mp[v[idx]]>1)
					extra=(extra * getInv( mp[v[idx]]))%MOD;

				// cout<<"prev ex: "<<extra<<endl;

				idx++;
		
				// cout<<"after ex and id "<<extra<<" "<<idx<<endl;

			}
		}

		

	}
	cout<<ans<<endl;


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
