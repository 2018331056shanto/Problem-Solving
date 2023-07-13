#include<bits/stdc++.h>
using namespace std;
const int mxn = 200005;
long long dp[mxn][7][2],n;
long long val[]={1,10,100,1000,10000};
string s;
#define ll long long
long long recurance(int in,int mx,int changed)
{
	if(in==-1) return 0;
    if(dp[in][mx][changed]!=-1) return dp[in][mx][changed];
    int sign=1;
    if(s[in]-'A'<mx) sign=-1;
    ll res=sign*val[s[in]-'A']+recurance(in-1,max(mx,int(s[in]-'A')),changed);
    if(!changed){
        for(int i=0; i<5; i++){
            if(i!=s[in]-'A'){
                sign=1;
                if(i<mx) sign=-1;
                res=max(res,sign*val[i]+recurance(in-1,max(mx,i),1));
            }
        }
    }
    return dp[in][mx][changed]=res;
}

void solve(){
	
	cin>>s;
	n=s.length();
    memset(dp, -1, sizeof(dp[0]) * (n+2));
	
	long long ans= recurance(n-1,0,0);
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
