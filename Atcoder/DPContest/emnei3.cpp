#include<bits/stdc++.h>
using namespace std;


void solve(){

	vector<int>nums={1,1,2};
	 int i=0;
        int j=i+1;
        int cnt=1;
        while(j<nums.size())
        {
        	// cout<<i<<" "<<j<<endl;
            if(nums[i]==nums[j])
            {
            	// cout<<"hello"<<endl;
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                swap(nums[i+1],nums[j]);
                // cout<<"bal"<<endl;
                cnt++;
                i++;
                j++;
            }
        }

        for(auto x:nums)
        {
        	cout<<x<<" ";
        }
        cout<<endl;
        cout<<cnt<<endl;


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
