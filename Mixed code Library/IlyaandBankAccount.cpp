#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long int n;
	int a[1000];
	cin>>n;
	if(n>=0)
	{
		cout<<n<<endl;
	}
	else
	{
		int cs=0;
		n=n*-1;
		while(n>0)
		{
			a[cs]=n%10;
			n=n/10;
			cs++;

		}
		if(a[0]>a[1])
		{
			a[0]=a[0];
		}
		else
		{
			a[1]=a[0];
		}
		//cout<<cs<<endl
		a[cs-1]=a[cs-1]*-1;
		for(int i=cs-1;i>0;i--)
		{
		
			cout<<a[i];
		}
		cout<<endl;
		

	}
}	