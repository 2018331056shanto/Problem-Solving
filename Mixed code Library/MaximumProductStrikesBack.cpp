// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
// 	int n;
// 	cin>>n;
// 	std::vector<int>v;
// 	vector<int>zero;
// 	vector<int>neg;
// 	int dp[n+1];
// 	int revdp[n+1];
// 	memset(revdp,0,sizeof(revdp));
// 	memset(dp,0,sizeof(dp));
// 	int cntneg=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		if(x<0)
// 		{
// 			cntneg++;
// 			neg.push_back(i);
// 		}
// 		if(x==0)
// 		{
// 			zero.push_back(x);
// 		}
// 		v.push_back(x);
// 	}
// 	if(abs(v[0])==2)
// 		dp[0]=1;

// 	for(int i=1;i<=n;i++)
// 	{
// 		if(abs(v[i])==2)
// 		{
// 			// cout<<abs(v[i])<<endl;
// 			dp[i]=dp[i-1]+1;
// 		}
// 		else
// 		{
// 			dp[i]=dp[i-1];
// 		} 
// 	}
// 	if(abs(v[n-1])==2)
// 		revdp[n-1]=1;
// 	for(int i=n-2;i>=0;i--)
// 	{
// 		if(abs(v[i])==2)
// 		{
// 			// cout<<abs(v[i])<<endl;
// 			revdp[i]=revdp[i+1]+1;
// 		}
// 		else
// 		{
// 			revdp[i]=revdp[i+1];
// 		} 
// 	}
// 	if(cntneg%2==0&&zero.size()==0)
// 	{

// 		cout<<0<<" "<<0<<endl;
// 	}
// 	else if(zero.size()==0&&cntneg%2==1)
// 	{
// 		int negFirst=-1;
// 		int negLast=-1;
// 		if(cntneg==1)
// 		{
// 			negFirst=neg[0];
// 			int fromFirst=dp[negFirst];
// 			int fromLast=revdp[negFirst];
// 			// cout<<"mother "<<endl;
// 			if(fromFirst>fromLast)
// 			{
// 				cout<<0<<" "<<n-negFirst<<endl;

// 			}
// 			else
// 			{
// 				cout<<negFirst+1<<" "<<0<<endl;
// 			}

// 		}
// 		else
// 		{
// 			// cout<<"father "<<endl;
// 			negFirst=neg[0];
// 			negLast=neg[neg.size()-1];
// 			// cout<<negFirst<<" dd "<<negLast<<endl;
// 			int fromFirst=dp[negFirst];
// 			int fromLast=revdp[negLast];
// 			// cout<<fromFirst<<" last "<<fromLast<<endl;
// 			if(fromLast>fromFirst)
// 			{
// 				cout<<negFirst+1<<" "<<0<<endl;

// 			}
// 			else
// 			{
// 				cout<<0<<" "<<n-negLast<<endl;
// 			}

// 		}
// 		// cout<<"done "<<endl;

// 	}
// // 	for(int i:revdp)
// // 		cout<<i<<" ";
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		solve();
// 	}
// }	
  