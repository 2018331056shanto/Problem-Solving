#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int  n,m,x;
		cin>>n>>m>>x;
		int l=x%n;
		if(l==0)
		{
			l=n;
		}
		//cout<<l<<endl;
		int k=x/n;
		if(k*n==x)
		{
			k=k;
		}
		else
		{
			k=k+1;
		}
		//cout<<k<<endl;
		cout<<(l-1)*m+k<<endl;
		
		
	}
}	