#include<bits/stdc++.h>

using namespace std;

int maxLengthOfDecreasingTransaction(vector<int>&v) {
    
    map<pair<int,int>,int>dp;

    for (int x : v) {

        map<pair<int,int>,int>newDp=dp; 

        pair<int,int> key={x,x};

        if (newDp.find(key)==newDp.end()) {

            newDp[key]=1;
        } else {

            newDp[key]=max(newDp[key],1);
        }

        for (auto entry : dp) {

            int s =entry.first.first;

            int e =entry.first.second;

            int len =entry.second;

            if (x>s) {
                pair<int, int>newKey={x, e};

                if (newDp.find(newKey)==newDp.end()) {
                    newDp[newKey]=len + 1;
                } else {
                    newDp[newKey] =max(newDp[newKey],len+1);
                }
            }

            if (x<e) {

                pair<int, int> newKey={s, x};


                if (newDp.find(newKey)== newDp.end()) {

                    newDp[newKey] =len+1;

                } else {

                    newDp[newKey]=max(newDp[newKey],len+1);
                }
            }
        }

        dp.swap(newDp); 
    }

    if (dp.empty())
     return 0;

    int maxLen = 0;
    for ( auto entry : dp) {
        maxLen = max(maxLen,entry.second);
    }

    return maxLen;
}


void solve()
{
    int n;
    cin>>n; 

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int fee;
        cin>>fee; 

        if(fee!=0)
        {
            v.push_back(fee);
        }
    }

    cout<<maxLengthOfDecreasingTransaction(v)<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
       solve();
    }

}