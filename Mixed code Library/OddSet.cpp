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
		int even=0,odd=0;
		for(int i=1;i<=2*n;i++)
		{
			int x;
			cin>>x;
			if(x%2)
				odd++;
			else
				even++;
		}
		if(odd==even)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}	