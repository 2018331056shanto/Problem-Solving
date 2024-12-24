#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
bool stat[1000010];
int dp[1000010];
void cntdiv()
{
	v.push_back(1);
	int mx=0;
	 while(mx<1000010)
	{
	int l=v[v.size()-1];
	stat[l]=true;
	int cnt=0;
    for(int j=1;j*j<=l;j++){
    if(l%j==0){
        cnt++;
        if(j!=(l/j))
           cnt++;
    }
}
	v.push_back(l+cnt);
	mx=l+cnt;
	// cout<<cnt<<endl;
	// cout<<mx<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cntdiv();
	// for(int i=0;i<v.size();i++)
	// {
	// 	cout<<v[i]<<endl;

	// }
	int t;
	cin>>t;
	dp[0]=0;
	for(int i=1;i<1000010;i++)
	{
		if(stat[i])
		{
			dp[i]=dp[i-1]+1;
		}
		else
		{
			dp[i]=dp[i-1];
		}
	}
	int cs=0;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		
		cout<<"Case "<<++cs<<": ";
	    cout<<dp[b]-dp[a-1]<<endl;
	}
	

}	