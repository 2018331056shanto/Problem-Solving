#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int w,b;
		cin>>w>>b;
		int wt=((k1+k2)/2);
		int bt=(2*n-k1-k2)/2;
		if(wt>=w&&bt>=b)
		{
			cout<<"YES"<<endl;;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	