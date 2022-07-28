#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool flag=false;
		int a[100]={0};
		for(int i=0;i<n;i++)
		{
			//cout<<int(s[i])<<endl;
			if(a[int(s[i])]==0)
			{

				a[int(s[i])]=i+1;
				//cout<<a[int(s[i])]<<endl;
			}
			else
			{
				int x=a[int(s[i])];
				a[int(s[i])]=i+1;
				//cout<<a[int(s[i])]<<" "<<x<<endl;
				if(a[int(s[i])]-x!=1)
				{
					flag=true;
					break;
				}
				
			}

		}
		if(flag)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}

	}
}	