#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int ar[20010];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&ar[i]);
		}
		int ans[20010];
		int mn=1e8;
		for(int i=n;i>=1;i--)
		{
			mn=min(i-ar[i],mn);
			//cout<<mn<<" "<<i<<endl;
			ans[i]=mn<i;


		}
		for(int i=1;i<=n;i++)
		{
			printf("%d ",ans[i]);
			
		}
		printf("\n");
		
	}
}	