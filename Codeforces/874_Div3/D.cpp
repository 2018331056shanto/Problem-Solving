// #include<bits/stdc++.h>
// using namespace std;


// void solve(){
	
// 	int n;
// 	cin>>n;
// 	vector<pair<int,int>>a(n);
// 	vector<int>c;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		/* code */
// 		int x;
// 		cin>>x;
// 		c.push_back
// 		a.push_back({x,i});
// 	}

// 	sort(a.begin(),a.end(),greater<>());

// 	int left=-1, right=0;
// 	if(a[0].second==0)
// 	{
// 		left=a[1].second;
// 		right=a[1].second;
// 	}
// 	else{
// 		int xx=a[0].first;
// 		right=a[0].second;
// 		for(int i=1;i<n;i++)
// 		{
// 			if((right-a[i].second)==1&&((xx-a[i].first)==1))

// 			{
// 				left=a[i].second;
// 				xx=a[i].first;
// 			}
// 			else{
// 				break;
// 			}
// 		}


// 	}
// 	cout<<left<<" "<<right<<endl;
	
// 	vector<int>ans;
// 	int idx=0;
// 	if(left==right||left==-1)
// 	{
// 		for(int i=right;i<n;i++)
// 		{
// 			ans.push_back(a[i].first);
// 			// idx++;
// 		}

// 		for(int i=0;i<right;i++)
// 		{
// 			ans.push_back(a[i].first);
// 		}

// 		// ans[left-1]=a[le]

// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		/* code */
// 		cout<<ans[i]<<" ";
// 	}
// 	cout<<endl;
// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		int t;
// 		cin>>t;
// 		while(t--)
// 		{
// 			solve();
// 		}
// 	}



        #include<bits/stdc++.h>
        using namespace std;
        
        
        int solve(int n){
        	
        vector<long long>dp(n+2,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout<<dp[n]<<endl;
        return dp[n];
        
        }
        
        int32_t main()
        	{
        		ios_base::sync_with_stdio(false); cin.tie(NULL);
        		int t;
        		// cin>>t;
        		// while(t--)
        		{
        			solve(1);
        		}
        	}
        