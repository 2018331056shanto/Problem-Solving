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
		char a[1000];
		for(int i=1;i<=2*n;i++)
		{
			a[i]='(';
			a[i+1]=')';
			++i;
		}
		int k=2;
		for(int j=1;j<=n;j++)
		{ 
			for(int i=1;i<=2*n;i++)
			{
				cout<<a[i];
			}
			cout<<endl;
				//cout<<k<<endl;
				for(;k<=2*n;k++)
				{
					
					{
						a[k]='(';
						a[k*2-1]=')';
						break;
					}
				}
				k++;
			
		}
		

	}
}	