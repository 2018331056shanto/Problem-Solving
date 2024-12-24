#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int x,y,c;
	cin>>x>>y>>c;
	if((c-x)>y&&(c-x)>0)
	{
		cout<<"Impossible"<<endl;
	
	}
	else if((c-y)>x&&(c-x)>0)
	{
		cout<<"Impossible"<<endl;
	}
	else if((c-x)>0)
	{
		cout<<x<<" "<<c-x<<endl;
	}
	else
	{
		cout<<y<<" "<<c-y<<endl;
	}
	
}	