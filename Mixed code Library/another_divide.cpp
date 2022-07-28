#include<bits/stdc++.h>
#include<cstdlib> 
using namespace std;
int main()
{
	int n,a[101],i,j,c,m;
	int count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c;

		for(j=0;j<c;j++)

		{

			cin>>a[j];
		}
		for(int k=0;k<c-1;k++)
		{
			for(int l=k+1;l<c-1;l++)
			{
				m=abs(a[l]-a[k]);
				if(m!=1)
					count+=count;

			}  
			
		}
cout<<count<<endl;
	}
	return 0;
}
