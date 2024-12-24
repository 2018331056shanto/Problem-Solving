#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,4,2,73,1,7,2,482,42,13,73,13};
	for(int i=1;i<12;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(a[j-1]>a[j])
			{
				swap(a[j-1],a[j]);
			}
		}

	}

	for(int i=0;i<12;i++)
	{
		cout<<a[i]<<" ";
	}

}
		

	