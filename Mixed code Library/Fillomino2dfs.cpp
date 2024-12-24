#include<bits/stdc++.h>
using namespace std;
int mat[600][600];
int val,cnt;int n;
void dfs(int i,int j)
{
	if(i>n||j<1)
	{
		return ;
	}
	if(mat[i][j])
	{
		return ;

	}
	if(cnt==val)
	{
		return ;
	}
	cnt++;
	mat[i][j]=val;
	dfs(i+1,j);
	dfs(i,j-1);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin>>n;
	int a[1000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		val=a[i];
		cnt=0;
		dfs(i,i);

	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}	