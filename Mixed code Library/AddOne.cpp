#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
std::vector<int> v;
long long dp[200005][11];
void cntdig(long long s)
    {
        while(s>0)
        {
            long m=s%10;
            v.push_back(m);
            //System.out.println(s);
            s=s/10;

        }
    }
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<10;i++)
	{
		dp[0][i]=1;

	}
	for(int i=1;i<200005;i++)
	{
		for(int j=0;j<9;j++)
		{
			dp[i][j]=dp[i-1][j+1]%mod;
		}
		dp[i][9]=(dp[i-1][0]%mod+dp[i-1][1]%mod)%mod;
	}
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		cntdig(n);
		long long  ans=0;
		for(int i=0;i<v.size();i++)
		{
			ans=(ans%mod+dp[m][v[i]]%mod)%mod;
		}
		v.clear();
		cout<<ans<<endl;
	}
}	