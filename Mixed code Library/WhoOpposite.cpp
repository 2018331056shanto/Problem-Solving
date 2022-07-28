#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int mx=max(a,max(b,c));
		int dif=abs(a-b);
		if(dif*2<mx)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(c>dif)
			{
				cout<<c-dif<<endl;
			}
			else
			{
				cout<<c+dif<<endl;
			}
		}
	}
}	