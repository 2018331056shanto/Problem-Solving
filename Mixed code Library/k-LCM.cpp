#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n%2==1)
		{
			cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
		}
		else
		{
			n=n/2;
			if(n%2==1)
			{
				cout<<2<<" "<<n-1<<" "<<n-1<<endl;
			}
			else
			{
				cout<<n/2<<" "<<n/2<<" "<<n<<endl;
			}
		}
	}
}	