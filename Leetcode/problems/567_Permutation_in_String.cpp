#include<bits/stdc++.h>
using namespace std;


bool checkInclusion(string s1, string s2) {
        map<char,int>mp,tmp;
        for(int i=0;i<s1.size();i++)
        {
            mp[s1[i]]++;
        }

        for(int i=0;i<=s2.size()-s1.size();i++)
        {
            tmp.clear();
            string s=s2.substr(i,s1.size());
            // cout<<s<<endl;
            for(int j=0;j<s.size();j++)
            {
                tmp[s[j]]++;

            }
            // for(auto x:tmp)
            // {
            //     cout<<x.first<<" "<<x.second<<endl;
            // }
            //  cout<<"==================="<<endl;
            //  for(auto x:mp)
            // {
            //     cout<<x.first<<" "<<x.second<<endl;
            // }
            // cout<<"==================="<<endl;
            if(mp==tmp)
            {
                return true;
            }

        }
        return false;

    }

void solve(){

    string s1="ab";
    string s2="";
    cout<<checkInclusion(s1,s2)<<endl;
    

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
