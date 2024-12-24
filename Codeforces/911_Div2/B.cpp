#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int a,b,c;
	cin>>a>>b>>c;

	int x=abs(b-c);
	int y=abs(a-c);
	int z=abs(a-b);

	int flag1,flag2,flag3;

	flag1=flag2=flag3=false;

	if(x%2==0)
	{
		
			flag1=true;
		
	}

	if(y%2==0)
	{
					flag2=true;
		
	}
	if(z%2==0)

	{
		
			flag3=true;
		
	}


	cout<<(flag1?1:0)<<" "<<(flag2?1:0)<<" "<<(flag3?1:0)<<endl;


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
