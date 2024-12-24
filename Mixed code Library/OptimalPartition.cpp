    // #include<bits/stdc++.h>
    // using namespace std;
    // struct BIT
    // {
    //     std::vector<int>bit;
    //     int n;
    //     BIT(int _n)
    //     {
    //         this.n=_n;
    //         bit.assign(n,0);

    //     }
    //     void update(int idx,int val)
    //     {
    //         for(++idx;idx<=n;idx+=idx&-idx)
    //         {
    //             bit[idx]=max(bit[idx],val);
    //         }
    //     }
    //     int query(int idx)
    //     {
    //         int ret=0;
    //         for(idx:idx>=0;idx-=idx&-idx)
    //         {
    //             ret=min(ret,bit[idx]);
    //         }
    //         return ret;
    //     }

    // };

    // void solve()
    // {

    
    // }

    // int32_t main()
    // {
    //     ios_base::sync_with_stdio(false); cin.tie(NULL);
    //     int t;
    //     cin>>t;
    //     while(t--)
    //     {
    //         solve();
    //     }
    // }
    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n;
        cin>>n;
        if(n>=1900)
        {
            cout<<"Division 1"<<endl;

        }
        else if(n>=1600&&n<1900)
        {
            cout<<"Division 2"<<endl;
        }
        else if(n>=1400&&n<1600)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
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