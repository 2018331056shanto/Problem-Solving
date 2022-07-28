#include<bits/stdc++.h>
using namespace std;
int t,h,m,hh,mm;
int a[10]={0,1,5,-1,-1,2,-1,-1,8,-1};
bool check(int nh,int nm)
{
	if(a[nh/10]==-1||a[nh%10]==-1||a[nm/10]==-1||a[nm%10]==-1)
		return false;
	int x=a[nm%10]*10+a[nm/10],y=a[nh%10]*10+a[nh/10];
	return x<h&&y<m;
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>h>>m;
		scanf("%d:%d",&hh,&mm);
		int nh=hh,nm=mm;
		while(nh!=0||nm!=0)
		{
			if(check(nh,nm))
			{
				break;
			}
			if(nm==m-1)
			{
				nh=(nh+1)%h;
			}
			nm=(nm+1)%m;
		}
		printf("%d%d:%d%d\n",nh/10,nh%10,nm/10,nm%10);
	}

	
}	