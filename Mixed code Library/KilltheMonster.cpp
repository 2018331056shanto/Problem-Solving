#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		bool flag=false;
		long double hc,dc,hm,dm;
		cin>>hc>>dc>>hm>>dm;
		long double co,arUp,health;
		cin>>co>>arUp>>health;
		for(int i=0;i<=co;i++)
		{
			long double new_hc=hc+(co-i)*health;
			long double enm=ceil(new_hc/dm);
			long double new_dc=(i*arUp)+dc;
			long double enc=ceil(hm/new_dc);
			if(enc<=enm)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
		
	}	
	
}