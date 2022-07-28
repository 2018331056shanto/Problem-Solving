#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int s;
		cin>>s;
		int cnt=1;
		s=s-1;
		int x=1;
		while(s>=0)
		{

			s=s-x;

			x+=2;
			//cout<<x<<endl;
			cnt++;

		}
		//cout<<x<<endl;
		
		cout<<--cnt<<endl;
	}
}	