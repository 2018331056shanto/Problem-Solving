#include<bits/stdc++.h>
using namespace std;

  struct BIT{
        int n;
        vector<int>bit;
        BIT(int n)
        {
            this->n=n;
            bit.assign(n+1,INT_MAX);

            
        }

        int query(int pos)
        {
            int ans=INT_MAX;
            pos=min(n,pos);

            while(pos>0)
            {
                ans=min(ans,bit[pos]);
                pos-=pos&-pos;
            }
            return ans;
        }

        int query(int left,int right)
        {
            if(left>right||left==0)
            {
                return INT_MAX;
            }
            return min(query(right),query(left));
        }

        void update(int pos,int val)
        {
            if(pos<=0)
            {
                return ;
            }
            while(pos<=n)
            {
                bit[pos]=min(bit[pos],val);
                pos+=pos&-pos;
            }
        }

    };

void solve(){
	
	int n;
	cin>>n;

	BIT bit(n);

	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		bit.update(i,x);
	}

	cout<<bit.query(3,4)<<endl;
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<bit.bit[i]<<endl
	// }


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
