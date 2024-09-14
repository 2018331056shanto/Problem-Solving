#include<bits/stdc++.h>
using namespace std;


      int recursion(vector<int>&coins,vector<vector<int>>&dp,int target,int start,set<int>&st,int &mn)
    {
		st.insert(coins[start]);

        if(coins.size()==start||target<0)
        {
            return 1e6;
        }
        
        if(dp[start][target]!=-1)
        {
        	// cout<<"dp :"<<coins[start]<<endl;

            return dp[start][target];
        }
        
        if(target==0)

        {
        	cout<<coins[start]<<endl;
        	int sz=st.size();
        	mn=min(sz,mn);
            return 0;
        }
        
        int ans=min(1+recursion(coins,dp,target-coins[start],start,st,mn),recursion(coins,dp,target,start+1,st,mn));
        dp[start][target]=ans;
        
        return dp[start][target];
        
    }
    
    int minimumAddedCoins(vector<int>& coins, int target) {
        
       stack<int>st;
       sort(coins.begin(),coins.end(),greater<>());
        
        for(auto x:coins)
        {
        	// cout<<x<<" ";
            st.push(x);
        }
        // cout<<endl;
        int ans=0;
        
        int preSum=0;
        int start=1;
        while(preSum<=target)
        {
        	if(preSum==target)
        	{
        		break;
        	}
        	// cout<<preSum<<" "<<start<<endl;
        	// cout<<"top : "<<st.top()<<endl;
        	// cout<<preSum<<" before  "<<start<<" "<<ans<<endl;
            if(!st.empty()&&(start>=st.top()))
            {
            	// cout<<"mother tost"<<endl;
            	preSum+=st.top();
            	st.pop();
            	start=preSum+1;
            }
            else
            {
            	// cout<<"fuck "<<endl;

            	// cout<<start<<endl;
            	ans++;
            	preSum+=start;
            	start=preSum+1;
            }
            
            // cout<<preSum<<" after "<<start<<" "<<ans<<endl;

        }
        return ans;
        
    }
    
    
  

void solve(){
	
	vector<int>v={1,1,1};

	cout<<minimumAddedCoins(v,20)<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
