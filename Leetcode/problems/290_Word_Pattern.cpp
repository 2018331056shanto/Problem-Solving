class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int>mp;
        map<string,int>smp;
          int y=1;
        string word = "";
        vector<string>v;
    for (auto x : s) 
    {
        if (x == ' ')
        {
            // smp[word]=y;
            v.push_back(word);
            // cout<<word<<endl;
            // ++y;
            word = "";
        }
        else {
            word = word + x;
        }

    }
    v.push_back(word);
    // cout<<"isa :"<<word<<endl;

    for(auto xx:v)
    {
        if(smp[xx])
        {
            continue;
        }
        else
        {
            smp[xx]=y;
        ++y;
        }
        
    }
      y=1;
        for(int i=0;i<pattern.size();i++)
        {
            if(mp[pattern[i]])
            {
                continue;
            }
            else
            {
                mp[pattern[i]]=y;
                // cout<<mp[s[]]
                ++y;
            }
        }
        string pat="";
        for(auto l:pattern)
        {
            pat=pat+to_string(mp[l]);
            
        }
        // cout<<pat<<endl;

        string w="";
        for(auto l:v)
        {
            w=w+to_string(smp[l]);
        }
        // cout<<w<<endl;
        // for(auto ss:mp)
        // {
        //     cout<<ss.first<<" "<<ss.second<<endl;
        // }
        // for(auto ss:smp)
        // {
        //     cout<<ss.first<<" "<<ss.second<<endl;
        // }
        if(w==pat)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return true;
    }
};