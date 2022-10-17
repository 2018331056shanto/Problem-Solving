#include<bits/stdc++.h>
using namespace std;


void solve(){
	
string S[8];
for(int i=0;i<8;i++)
{
	cin>>S[i];
}
for(int i=0;i<8;i++)
{
	bool flag=true;
	for(int j=0;j<8;j++)
	{
		if(S[i][j]!='R')
		{
			flag=false;
		}
	}
	if(flag)
	{
		cout<<"R"<<endl;
		return;
	}
}
cout<<"B"<<endl;

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
