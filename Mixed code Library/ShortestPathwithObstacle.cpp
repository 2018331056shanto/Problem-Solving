#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(f>=b&&f<=d||f>=d&&f<=b)
		{
			cout<<abs(b-d)+2<<endl;
		}
		else
		{
			cout<<abs(b-d)<<endl;
		}
	}
}	