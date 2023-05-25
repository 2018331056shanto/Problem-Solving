#include<bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
     
     map<int,int>mp;
     int j=0;
     int ans=0;
     for(int i=0;i<fruits.size();i++)
     {
        mp[fruits[i]]++;
        if(mp.size()>2)
        {

            while(j<i)
            {
               mp[fruits[j]]--;
  
                if(mp[fruits[j]]==0){
                    mp.erase(fruits[j]);
                    j++;
                    break;
                }
                j++;
            }

        }
        else
        {
        	int tot=0;
        	for(auto x:mp)
        	{
        		tot+=x.second;
        	}
        	ans=max(tot,ans);

        }

     }
     return ans;
    
    }


void solve(){
	
	vector<int>v;
	// 1,2,3,2,2
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	cout<<totalFruit(v)<<endl;

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
