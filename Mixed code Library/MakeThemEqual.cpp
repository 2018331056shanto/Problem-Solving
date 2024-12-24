// #include<bits/stdc++.h>
// using namespace std;
// #define N 1001
// long long dp[1010][1010*12];
// int main()
// {
	
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	  vector<int> d(N, N);
//   d[1] = 0;
//   for (int i = 1; i < N; ++i) {
//     for (int x = 1; x <= i; ++x) {
//       int j = i + i / x;
//       if (j < N) d[j] = min(d[j], d[i] + 1);
//     }
//   }
		
		
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,k;
// 		int total=0;
// 		cin>>n>>k;
// 		int b[n]={0};
// 		int c[n]={0};
// 		int W[1010]={0};
// 		for(int i=0;i<1010;i++)
// 		{
// 			for(int j=0;j<12*1010;j++)
// 			{
// 				dp[i][j]=0;
// 			}
// 		}
// 		bool flag=false;
// 		for(int i=1;i<=n;i++)
// 		{
// 			cin>>b[i];
			
// 		}
		
// 		for(int i=1;i<=n;i++)
// 		{
			
// 			cin>>c[i];
// 			total+=c[i];
// 		}
// 		int val=0;
		
// 		for(int i=1;i<=n;i++)
// 		{
// 			W[i]=d[b[i]];

// 			 // cout<<W[i]<<" ";
// 		}
// 		// cout<<endl;
// 		// cout<<ar[1]<<endl;
		
// 		// cout<<val<<endl;
// 		if(k>=12*n)
// 		{
// 			cout<<total<<endl;
// 		}
// 		else
// 		{
// 			for (int i = 1; i <= n; i++) {
//         for (int j = 0; j <= k; j++) {
//           dp[i][j] = dp[i - 1][j];
//           if (j >= W[i]) {
//             dp[i][j] = max(dp[i][j], dp[i - 1][j - W[i]] + c[i]);
//           }
//           if (j) dp[i][j] = max(dp[i][j], dp[i][j - 1]);
//         }
//       }
//       cout<<dp[n][k]<<endl;
		
// 		}
		
// 	}	
	
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
		std::vector<int> v,v1,v3;
		cout<<"The amount of data you want to store in List 1 :"<<endl;
		int n;
		cin>>n;
		cout<<"Enter the data you want to store in List 1: "<<endl;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		cout<<"The amount of data you want to store in List 2 :"<<endl;
		int n1;
		cin>>n1;
		cout<<"Enter the data you want to store in List 2: "<<endl;
		for(int i=0;i<n1;i++)
		{
			int x;
			cin>>x;
			v1.push_back(x);
		}

		v3=v;
		for(int i=0;i<n1;i++)
		{
			v3.push_back(v1[i]);
		}	
		// for(int x:v3)
		// {
		// 	cout<<x<<endl;
		// }
		cout<<"Type 0 to close the Program "<<endl;
		string s;
		while(cin>>s)
		{
			// cout<<s<<endl;
			if(s=="0")
			{
				cout<<"Your Program has Closed Successfully"<<endl;
				break;
			}
			string number;
			bool flag=false;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='(')
				{
					for(int j=i+1;j<s.size();j++)
					{
						if(s[j]==')')
						{
							flag=true;
							break;
						}

						number+=s[j];

					}
				}
				if(flag)
				{
					break;
				}
			}
			int num=stoi(number);

			cout<<v3[num-1]<<endl;

		}
		
	
	

	
}