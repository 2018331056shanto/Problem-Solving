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
		string a,b;
		cin>>a>>b;
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='1'&&b[i]=='1'||b[n-1]=='1')
			{
				flag=true;
			}
		}
		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}	