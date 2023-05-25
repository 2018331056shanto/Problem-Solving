class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int ans=0;
        int prev=0;
        for(int i=0;i<s.size();i++)
        {
           
            if(mp[s[i]]!=0)
            {
               
                prev=max(prev,mp[s[i]]);
               
            }

            ans=max(ans,i-prev+1);
            mp[s[i]]=i+1;
                  
        }   
        return ans;
    }
};