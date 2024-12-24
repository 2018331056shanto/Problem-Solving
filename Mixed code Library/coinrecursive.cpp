// // Recursive C++ program for
// // coin change problem.
// #include <bits/stdc++.h>
// using namespace std;

// // Returns the count of ways we can
// // sum S[0...m-1] coins to get sum n
// int count(int S[], int m, int n)
// {
// 	int cnt=0;
// 	// If n is 0 then there is 1 solution
// 	// (do not include any coin)
// 	if (n == 0)
// 		return 1;
	
// 	// If n is less than 0 then no
// 	// solution exists
// 	if (n < 0)
// 		return 0;

// 	// If there are no coins and n
// 	// is greater than 0, then no
// 	// solution exist
// 	if (m <= 0 && n >= 1)
// 		return 0;

// 	// count is sum of solutions (i)
// 	// including S[m-1] (ii) excluding S[m-1]
// 	cnt++;
// 	cout<<"m :"<<m<<" "<<"n :"<<n<<" "<<"cnt :"<<cnt<<" "<<"<<S[m-1] :"<<S[m-1] <<endl;
// 	return count(S, m - 1, n) +
// 		count(S, m, n - S[m - 1]);

// }

// // Driver code
// int main()
// {
// 	int i, j;
// 	int arr[] = {1,2,3};
// 	int m = sizeof(arr) / sizeof(arr[0]);
	
// 	cout << " " << count(arr, m, 4);
	
// 	return 0;
// }

// // This code is contributed by shivanisinghss2110
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