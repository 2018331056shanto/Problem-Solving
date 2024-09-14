#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	string s;
	cin>>s; 

	if(n<2)
	{
		cout<<"No"<<endl;
		return;
	}

	double x=sqrt((double)n);

	int d=sqrt(n);

	if(x>d)
	{
		cout<<"No"<<endl;
		return;
	}
	int cnt=0;

	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			cnt++;
		}
	}

	if(n==4&&cnt==0)
	{
		cout<<"Yes"<<endl;
	}

	else
	{
			if(cnt==((d-2)*(d-2)))
			{
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
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
