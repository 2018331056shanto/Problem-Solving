#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	if(n==3){
		cout<<-1<<endl;
		return;
	}

	if(n%2)
	{
		cout<<n<<" "<<n-1<<" ";
		for(int i=1;i<=n-2;i++)
		{
			cout<<i<<" ";
			
		}
		cout<<endl;
	}
	else
	{
		for(int i=n;i>=1;i--)
		{
			cout<<i<<" ";
		}
		cout<<endl;
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
