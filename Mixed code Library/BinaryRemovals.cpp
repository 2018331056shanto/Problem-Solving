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
		bool cnt1=false;
		bool cnt0=false;
		bool flag=true;
		int idx1=0;
		int idx0=0;
		if(s.size()==2)
		{
			cout<<"YES"<<endl;
		}
		else if(s.size()==3)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1'&&s[i+1]=='1')
			{
				if(cnt1)
				{
					continue;
				}
				cnt1=true;
				idx1=i;
			}
			if(s[i]=='0'&&s[i+1]=='0')
			{
				
					

				cnt0=true;
				idx0=i;
			}


		}

		if(cnt0&&cnt1&&idx0>idx1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		}
		
	}
}	