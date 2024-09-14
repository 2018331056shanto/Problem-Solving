#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int b=0;


	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='B')
		{
			b++;
		}
		

	}

	if(b==k)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<1<<endl;
		
		int x=b;
		if(b>k)
		{
			for(int i=0;i<n;i++)
			{
				
				if(s[i]=='B')
				{
					x--;
				}
				if(x==k)
				{
					cout<<i+1<<" "<<"A"<<endl;
					return;
				}
			}
		}
		else
		{
			int x=b;
			for(int i=0;i<n;i++)
			{
				
				if(s[i]=='A')
				{
					x++;
				}
				if(x==k)
				{
					cout<<i+1<<" "<<'B'<<endl;
					return;
				}
			}
		}
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
