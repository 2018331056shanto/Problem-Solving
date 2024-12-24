#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,x,y;
	cin>>n>>x>>y;
	if((x>0&&y>0)||(x==0&&y==0))
	{
		cout<<-1<<endl;
		return;
	}	
	int temp=max(x,y);
	if((n-1)%temp!=0)
	{
		// cout<<"hello"<<endl;

		cout<<-1<<endl;
	}
	else{
		for(int k = 2; k <= n; k += temp)
		{
			for(int i = 1; i <= temp; i++)cout << k << ' ';
		}
		cout << endl;
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
