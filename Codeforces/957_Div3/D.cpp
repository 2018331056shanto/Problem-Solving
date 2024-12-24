#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;
	cin>>n>>m>>k; 

	string river;
	cin>>river;
	river="L"+river+"L";

	int current=0,swim=0;

	while(current<=n)
	{
		if(river[current]=='C')
			break;

		if(river[current]=='W')
		{
			current++;
			swim++;
			continue;
		}
		assert(river[current]=='L');
		bool jumped=false;
		
		for(int i=min(current+m,n+1);i>current;i--)
		{
			if(river[i]=='L')
			{
				current=i; 
				jumped=true;
				break;
			}
		}	
		if(jumped)
			continue;

		for(int i=min(current+m,n+1);i>current;i--)
		{
			if(river[i]=='W')
			{
				current=i;
				jumped=true;
				break;
			}
		}
		if(!jumped)
			break;
	}
	
cout<<(current>n&&swim<=k?"YES":"NO")<<endl;

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
