#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;

	cin>>n; 

	std::vector<int>a(n),b(n);
	map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		
	}

	cin>>m;

	vector<int>d(m);

	for(int i=0;i<m;i++)
	{
		cin>>d[i];
	}


	// int cnt=0; 

	int dif=0;
	map<int,int>notdif;

	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			mp[b[i]]++;
			dif++;
		}
		else
		{
			notdif[b[i]]++;
		}
	}
	
	int cnt=0;
	int x=0; 
	for(int i=0;i<m;i++)
	{
		if(mp.find(d[i])!=mp.end())
		{
			
				mp[d[i]]--;
				dif--;

				x=0;
		}
		else
		{
				if(notdif.find(d[i])!=notdif.end())
				{
					x=0;
					continue;
				}
				else
				{
					// cout<<"hello "<<endl;
					x++;
				}
		}
		
	}

	bool flag=true;

	for(auto y:mp)
	{
		if(y.second>0)
		{
			flag=false;
			break;
		}
	}
	// for()

	// cout<<flag<<" "<<dif<<" "<<x<<endl;
	if(flag&&dif<=0&&x<=0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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
