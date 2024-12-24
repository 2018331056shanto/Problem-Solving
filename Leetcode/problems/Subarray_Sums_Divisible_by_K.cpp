class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        if(nums.size()==1)
        {
            if(nums[0]%k==0)
            {
                return 1;

            }
            else
            {
                return 0;
            }
            
        }
        nums[0]=(nums[0]%k+k)%k;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=(nums[i-1]%k+nums[i]%k+k)%k;
        }
        for(auto x:nums)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        vector<int>v(k+1);
        int ans=0;
        v[0]=1;
        for(auto x:nums)
        {
            if(v[x]!=0)
            {
                cout<<x<<endl;
                ans+=v[x];
                v[x]++;
            }
            else
            {
                v[x]++;
            }
        }

        return ans;
    }
};