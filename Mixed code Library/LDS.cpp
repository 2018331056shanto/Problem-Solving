#include<bits/stdc++.h>
using namespace std;
int t[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int ar[]={3,4,-1,0,6,3,2};
	
	for(int i=0;i<7;i++)
	{
		t[i]=1;
	}
	for(int i=1;i<7;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(ar[i]<ar[j])
			{

				t[i]=max(t[i],t[j]+1);
			}
			else
			{

				continue;
			}
		}
	}	
	cout<<t[6]<<endl;
}