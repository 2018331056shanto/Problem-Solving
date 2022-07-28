#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	
	std::vector<char> v;
	if(b.size()>a.size())
{
	swap(a,b);
}
// cout<<a<<" "<<b<<endl;
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
	cout<<dp[b.size()][a.size()]<<endl;
	//  int i=b.size();
	// int j;
	// for(j=a.size();j>0;j--)
	// {
	// 	if(i==0)
	// 		break;
		
	// 	 if(dp[i][j]==dp[i-1][j])
	// 	{
	// 		i=i-1;
	// 		j++;
	// 	}
	// 	else if(dp[i][j]==dp[i][j-1])
	// 	{
	// 		i=i;
	// 	}
	// 	else
	// 	{
	// 		v.push_back(a[j-1]);
	// 		//cout<<i<<" "<<j<<endl;
	// 		//cout<<a[j-1]<<endl;
	// 	}
	// }
	// for(int k=v.size()-1;k>=0;k--)
	// {
	// 	cout<<v[k];
	// }
	// cout<<endl;

}