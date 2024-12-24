#include<bits/stdc++.h>
using namespace std;
vector<int>cnt(3e5+20);
    vector<bool> inSeq(3e5+20);
    vector<int> ans(3e5+20);

bool better(vector<int>&ans,int pos,int val)
{
    if(pos&1)
    {
        return val<ans[pos];
    }
    return val>ans[pos];
}
void solve(){
    
    int n;
    cin>>n; 

    std::vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }


    int ptr=0;

    for(int i=0;i<n;i++)
    {
        cnt[v[i]]--;
        if(!ptr)
        {
            ans[ptr]=v[i];
            inSeq[v[i]]=true;
            ptr++;
        }
        else
        {
           if(inSeq[v[i]])
            continue;
            
            while((ptr&&cnt[ans[ptr-1]]&&better(ans,ptr-1,v[i]))||

                (ptr>=2&&cnt[ans[ptr-1]]&&cnt[ans[ptr-2]]&& better(ans,ptr-2,v[i]))
                )   
            {

                if(ptr&&cnt[ans[ptr-1]]&&better(ans,ptr-1,v[i]))
                {
                    inSeq[ans[ptr-1]]=false;
                    ptr--;
                }
                else
                {
                    inSeq[ans[ptr-1]]=false;
                    ptr--;
                    inSeq[ans[ptr-1]]=false;
                    ptr--;
                }

            }
             ans[ptr]=v[i];
                inSeq[v[i]]=true;
                ptr++;
                // cout<<"ptr : "<<ptr<<endl;

        }


    }

    cout<<ptr<<endl;

    for(int i=0;i<ptr;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cnt[v[i]]=0;
        inSeq[v[i]]=false;
        ans[i]=0;
    }

   


}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }
