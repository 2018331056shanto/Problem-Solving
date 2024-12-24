#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int row=0,col=0;

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			int x;
			cin>>x;
			if(x==1)
			{
				row=i;
				col=j;
				
			}
		}
	}
	cout<<abs(3-row)+abs(3-col)<<endl;

		
}