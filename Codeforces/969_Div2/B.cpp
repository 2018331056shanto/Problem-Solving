#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n,q;
	cin>>n>>q; 

	std::vector<int> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int mx=*max_element(v.begin(),v.end());
	while(q--)
	{
		char c;
		int l,r;
		cin>>c>>l>>r;

		if(l>mx)
		{
			cout<<mx<<" ";
		}
		else if(c=='+')
		{
			if(r>=mx)
			{
				mx=mx+1;
			}
			else
			{
				mx=max(mx,r+1);
			}

			cout<<mx<<" ";
		}
		else
		{
			 if(r>=mx)
			 {
			 	mx=mx-1;
			 }
			 else{

			 	mx=mx;
			 }
			 cout<<mx<<" ";
		}

	}
	cout<<endl;
	

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
