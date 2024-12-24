#include<bits/stdc++.h>
using namespace std;
int mat[600][600];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	int a[1000]={};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int k=0;k<n;k++)
	{
		int x=a[k];
		int cnt=0;
		int ll=k;
		for(int i=k;i<n;i++)
	{
		
		for(int j=ll;j>=0;j--)
		{
			if(mat[i][j]==0)
			{
				if(cnt==x)
					break;
				mat[i][j]=x;
				cnt++;
				ll=j;
			}
			else
			{
				break;
			}
		}
		//cout<<ll<<endl;
		if(cnt==x)
			break;
		if(mat[i][ll]==0)
		{
			mat[i][ll]=x;
		cnt++;
		}
		
		
		
		
	}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
}	