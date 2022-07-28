#include<bits/stdc++.h>
using namespace std;
#define sz 1005
int up[sz][sz];
int lef[sz][sz];
long long ans=0;
int a[sz][sz];
int n,m,q;
void recurance(int x,int y)
{
	if(x>n||y>m)
		return;
	//cout<<x<<" "<<y<<endl;
	int u=a[x][y]?0:lef[x-1][y]+1;
	int l=a[x][y]?0:up[x][y-1]+1;
	if(u==up[x][y]&&l==lef[x][y])
		return;
	ans+=u-up[x][y];
	ans+=l-lef[x][y];
	up[x][y]=u;
	lef[x][y]=l;
	recurance(x+1,y);
	recurance(x,y+1);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin>>n>>m>>q;
	int tot=n*m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			lef[i][j]=up[i][j-1]+1;
			up[i][j]=lef[i-1][j]+1;
			ans+=lef[i][j];
			ans+=up[i][j];
		}
	}
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		if(!a[x][y])
		{
			tot--;
		}
		else
		{
			tot++;
		}
		a[x][y]^=1;
		recurance(x,y);
			cout<<ans-tot<<endl;

	}


}	