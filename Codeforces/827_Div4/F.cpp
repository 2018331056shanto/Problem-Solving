#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int q;
	cin>>q;
	long long cntT=0,cntS=0,exceptT=0,exceptS=0;
	for(int i=0;i<q;i++)
	{
		int d,k;
		string S;
		cin>>d>>k>>S;
		for(auto x:S)
		{
			if(d==2)
			{
				if(x!='a')
				exceptT=1;
			else
				cntT+=k;
			}
			else{
				if(x!='a')
					exceptS=1;
				else
					cntS+=k;
			}
			
		}
		if(exceptT)
		{
			cout<<"YES"<<endl;
		}
		else if(!exceptS&&cntS<cntT)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
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
