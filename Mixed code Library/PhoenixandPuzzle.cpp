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
		if(n==2)
		{
			cout<<"YES"<<endl;
		}
		else if(n%2==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			double x=sqrt(n);
			int k=(int)x;
			if(x==k)
			{
				cout<<"YES"<<endl;
			}
			else 
			{
				double l=n/2;
				double m=sqrt(l);
			    int o=(int)m;
			    if(m==o)
			    {
			    	cout<<"YES"<<endl;


			    }
			    else
			    {
			    	cout<<"NO"<<endl;
			    }


			}
		}
	}
}	