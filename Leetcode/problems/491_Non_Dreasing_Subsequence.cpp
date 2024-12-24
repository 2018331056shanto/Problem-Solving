class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        vector<vector<int>>v;
        set<vector<int>>st;
        int n=nums.size();
        int noOfSubSequence=(1<<n)-1;

        for(int i=1;i<=noOfSubSequence;i++)
        {
            vector<int>v;
            int t=INT_MIN;
            int temp=i,j=0;
            bool flag=true;
            while(temp>0)
            {
                
                if(temp&1)
                {
                    int x=nums[j]; 
                    // cout<<x<<" "<<t<<endl;;   
                    if(t>x)
                    {
                        flag=false;
                        break;
                    }    
                    else
                    {
                        v.push_back(x);
                        
                    }
                    t=x;
                    // cout<<t<<" "<<x<<endl;
                }
                j++;
                temp=temp >>1;
            }
            // cout<<endl;
            if(flag)
            {
                if(v.size()>1)
                    st.insert(v);
            }

        }
        // vector<vector<int>>ans;
        // for(auto x:st)
        // {
        //     ans.push_back(x);
        // }
        
        return vector(st.begin(),st.end());
    }
};