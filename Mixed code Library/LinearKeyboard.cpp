#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int x=0,y=0,ans=0;
		for(int j=0;j<b.size()-1;j++)
		{
			for(int i=0;i<a.size();i++)
		{

			if(b[j]==a[i])
			{
				x=i+1;
				
			}
			if(b[j+1]==a[i])
				y=i+1;

		}
		ans+=abs(x-y);
		}
		
cout<<ans<<endl;
	}
	
}	