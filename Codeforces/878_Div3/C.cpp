#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k,q;
	cin>>n>>k>>q;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	vector<int>st;
	int c=0;
    for ( int i = 0; i < n; i++)
    {
        
        if(v[i]<=q) {
			c++ ;
			if(c>=k)
                st.push_back(c) ;
		}
		else{
		    c=0 ;
		}
    }
    long long x = 0;
    for (int i = 0; i < st.size(); i++)
    {
        x+= (st[i]-k+1) ;
    }
	cout<<x<<endl ;
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
