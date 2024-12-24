#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	string s,lat;
	cin>>s;
	int idx[200]={0};
    lat="abcdefghijklmnopqrstuvwxyz";
    int cnt=1;
    for(auto i:lat)
    {
    	idx[int(i)]=cnt;
    	cnt++;

    }
    int dp[100000]={0};
    dp[0]=0;
    int k=1;
    for(int i=0;i<s.size();i++)
    {
    	int tem=idx[int(s[i])];

    	dp[k]=dp[k-1]+tem;
    	k++;

    }
    for(int i=0;i<q;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	cout<<dp[y]-dp[x-1]<<endl;
    }
    // for(int i=0;i<8;i++)
    // {
    // 	cout<<dp[i]<<endl;
    // }

}	