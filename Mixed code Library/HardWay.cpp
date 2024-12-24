#include<bits/stdc++.h>
using namespace std;
void solve()
{
	
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double dis=0;
	if(y1==y2&&y3<y1)
	{
		// cout<<"hello"<<endl;
		dis=abs(x2-x1);
	}
	else if(y2==y3&&y1<y2)
	{
		dis=abs(x3-x2);
	}
	else if(y1==y3&&y2<y1)
	{
		dis=abs(x1-x3);
	}
	printf("%lf\n",dis );

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	
