#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		std::vector<int>aa,bb;
		int a,b;
		cin>>a>>b;
		int ta=a;
		int tb=b;
		while(a>0)
		{
			int x=a%10;
			aa.push_back(x);
			a/=10;
		}
		while(b>0)
		{
			int y=b%10;
			bb.push_back(y);
			b/=10;
		}
		sort(aa.begin(),aa.end());
		sort(bb.begin(),bb.end());
		int basea=aa[aa.size()-1]+1;
		int baseb=bb[bb.size()-1]+1;
		int ansa=0;
		int ansb=0;
		int count=0;
		while(ta>0)
		{
			ansa+=(ta%10)*pow(basea,count++);
			ta/=10;
		}
		count=0;

		while(tb>0)
		{
			ansb+=(tb%10)*pow(baseb,count++);
			tb/=10;
		}
		
		cout<<ansa+ansb<<endl;


	}
}	