#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	string s;
	cin>>s; 
	
	
	std::vector<char> dig,car;

	for(int i=0;i<n;i++)
	{
		if(s[i]<='9')
		{
			dig.push_back(s[i]);
		}
		else
		{
			car.push_back(s[i]);
		}
	}
	int cnt=0;

	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		if((s[i]>='a'&&s[i+1]<='9'))
		{
			flag=false;
			break;
		}

		
	}

	if(is_sorted(dig.begin(),dig.end())&&is_sorted(car.begin(),car.end())&&flag)
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
