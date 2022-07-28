#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			int a=i*i+j;
			int b=i+j*j;
			if(a==n&&b==m)
			{
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;	
	
}
string a=v[k];
			string b=n;
			int dp[b.size()+1][a.size()+1];
			for(int i=0;i<=b.size();i++)
			{
				for(int j=0;j<=a.size();j++)
				{
					if(i==0||j==0)
					{
						dp[i][j]=0;
					//cout<<dp[i][j]<<endl;

					}
					else if(a[j-1]==b[i-1])
					{
						dp[i][j]=1+dp[i-1][j-1];
				//cout<<"dds"<<endl;
					}
					else
					{
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					}
				}
			}
	
			//cout<<"fuck you"<<endl;
			int lcs=dp[b.size()][a.size()];
			cout<<"hello "<<a<<endl;;
			cout<<lcs<<endl;
			ans=min((int)a.size()+(int)b.size()-2*lcs,(int)ans);
			if(a.size()>b.size())
			{
				break;
			}