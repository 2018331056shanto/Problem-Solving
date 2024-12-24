#include<bits/stdc++.h>
using namespace std;


void solve(){

	vector<int>nums={1,1,1,2,2,2,3,3};
	nums.push_back(INT_MAX);
	
	 map<int,int>mp;
        int i=0;
        int j=i+1;

        int count=0;
        while(j<nums.size())
        {
        	// cout<<i<<" "<<j<<endl;
            if(nums[i]==nums[j])
            {
                if((mp.find(nums[i])==mp.end()||mp[nums[i]]<2))
                {
                	// cout<<"fuck match "<<endl;
                	mp[nums[i]]++;
                    i++;
                    j++;
                   

                }
                else
                {
                	// cout<<"fuck match x"<<endl;
                    j++;
                }
                

            }

            else if(nums[i]!=nums[j])
            {
            	// cout<<"nums "<<nums[i]<<endl;
            	if(mp[nums[i]]<2)
            	{
            		
            		mp[nums[i]]++;
            		i++;
            		// cout<<"hello fuck"<<endl;
            		// j++;
            	}
            	else if(mp[nums[j]]==2)
            	{
            		j++;
            	}
                else 
                {
                	// cout<<"fuck bro"<<endl;
                	
                    swap(nums[i],nums[j]);
                    // cout<<"hello not fuck : "<<nums[i]<<endl;
        			// if(mp[nums[i]]==2)
        			// {
        			// 	continue;
        			// }
        			// else
        			// {
        				mp[nums[i]]++;

        			// }
                    
                    
                    i++;
                    j++;

                }
            }
        }

        for(auto x:nums)
        {
        	cout<<x<<" ";
        }
        cout<<endl;
     	for(auto x:mp)
     	{
     		if(x.first!=INT_MAX)
     		count+=x.second;
     	}
     	cout<<count<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
