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
		int a,b;
		if(n%3<2)
		{
			b=n/3;
			a=n-(b*2);

		}
		else
		 {
		 	b=(n/3)+1;
		 	a=n-(b*2);

		}
		cout<<a<<" "<<b<<endl;
		
	}
}	