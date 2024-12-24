#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int r,c,st1,st2,d1,d2;
		cin>>r>>c>>st1>>st2>>d1>>d2;
		int ans=0,ans1=0;;
		if(st1<=d1)
		{
			ans=d1-st1;
		}
		else
		{
			ans=2*r-st1-d1;
		}
		if(st2<=d2)
		{
			ans1=d2-st2;
		}
		else
		{
			ans1=2*c-d2-st2;
		}
		cout<<min(ans,ans1)<<endl;
	}
}	
	
