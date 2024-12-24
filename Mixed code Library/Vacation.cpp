// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int n;
// 	cin>>n;
// 	int a[100];
// 	a[0]=a[1]=a[2]=0;
// 	int b[100];
// 	b[0]=b[1]=b[2]=0;
// 	long  long ans=0;
// 	for(int i=0;i<n;i++)	
// 	{
// 		int x,y,z;
// 		cin>>x>>y>>z;
// 		if(i==0)
// 		{
// 			a[0]=x;
// 			a[1]=y;
// 			a[2]=z;
// 			b[0]=x;
// 			b[1]=y;
// 			b[2]=z;
// 		}
// 		else
// 		{
// 			a[0]=max(x+b[1],x+b[2]);
// 			//cout<<"a[0] "<< a[0]<<endl;
// 			a[1]=max(y+b[0],y+b[2]);
// 			//cout<<"a[1] "<<a[1]<<endl;
// 			a[2]=max(z+b[0],z+b[1]);
// 			//cout<<"a[2] "<<a[2]<<endl;
// 			b[0]=a[0];
// 			b[1]=a[1];
// 			b[2]=a[2];
			
// 			//cout<<"ans "<<ans<<endl;
// 		}
		
// 	}ans=max(a[0],max(a[1],a[2]));
// 	cout<<ans<<endl;

	
	
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout<<"fuck"<<endl;
	int amount;
	cin>>amount;
	int coins[1000]={0};
	int cn;
	cin>>cn;
	for(int i=0;i<cn;i++)
	{
		cin>>coins[i];
	}
	sort(coins,coins+4);
	int dp[1000][1000]={0};
	for(int i=0;i<=cn;i++)
	{
		for(int j=0;j<=amount;j++)
		{
			if(j==0)
				dp[i][j]=1;
			else
				dp[i][j]=0;
		}
	}
	cout<<"fuck"<<endl;
	for(int i=0;i<=cn;i++)
	{
		for(int j=0;j<=amount;j++)
		{
			cout<<"fuck"<<endl;
			if(coins[i]<j)
				dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=dp[i][j-coins[i]]+dp[i-1][j];
		}
	}
	cout<<dp[cn][amount]<<endl;
	
}