#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[1000]={0};
		for(int i=0;i<s.size();i++)
		{
			char x=s[i];
			//cout<<int(x)<<endl;
			a[int(x)]++;
		}
		int cnt1=0,cnt2=0;
		for(int i=90;i<150;i++)
		{
			if(a[i]==1)
			{
				++cnt1;
			}
			if(a[i]>1)
			{
				cnt2++;
			}

		}
		//cout<<cnt1<<" "<<cnt2<<endl;
		int ans=0;
		ans+=cnt1/2;
		ans+=cnt2;
		if(s.size()==1)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}
	}
}	