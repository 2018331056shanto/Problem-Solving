#include<bits/stdc++.h>
using namespace std;



void solve(){

	vector<int>nums={0,1,2,2,3,0,4,2};
	int val=2;
	    int n=nums.size()-1;
        int i=0;
        int j=n;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
        	if(nums[i]==val)
        	{
        		cnt++;
        	}
        }

        while(i<j)
        {
        	// cout<<i<<" "<<j<<endl;
           
            if(nums[i]==val&&nums[j]==val)
            {
                j--;
            }
             else if(nums[i]==val&&nums[j]!=val)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
           else if(nums[i]!=val&&nums[j]!=val)
            {
            	// cout<<"fuck"<<endl;
                i++;
            }
            else if(nums[i]!=val&&nums[j]==val)
            {
            	i++;
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
