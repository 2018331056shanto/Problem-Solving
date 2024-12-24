#include<bits/stdc++.h>
using namespace std;
int mod(int n)
{
	int x=(n/7)*7;
	int x1=n%10;
	n/=10;
	int x2=n%10;
	return x2;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%7==0)
		{
			cout<<n<<endl;
		}
		else if(n<10)
		{
			cout<<7<<endl;
		}
		else
		{
			int tmp=(n/7)*7;
			int x=mod(n);
			int x1=mod(tmp);
			if(x==x1)
			{
				cout<<tmp<<endl;
			}
			else
			{
				cout<<tmp+7<<endl;
			}



		}
	}	
	
}