#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int g=12;
	int k=0;
	//while(g>1)
	{
		for(int i=2;i<=g/2;i++)
		{
			if(g%i==0)
			{
				k++;
				g=g/i;
				break;
			}
		}
	}
	cout<<k<<endl;
}	