#include<bits/stdc++.h>
using namespace std;

long long dist(long x1,long x2,long y1,long y2)
{
	return 1ll*(x2-x1)*(x2-x1)+1ll *(y1-y2)*(y1-y2);
}

struct Circle
{
	int x,y;
};
void solve(){
	
	int n;
	cin>>n; 

	std::vector<Circle> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i].x>>v[i].y;
	}

	long long sx,sy,gx,gy;

	cin>>sx>>sy>>gx>>gy;

	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(dist(gx,v[i].x,gy,v[i].y)<=dist(sx,gx,sy,gy))
		{
			flag=false;
			break;
		}
	}

	cout<<(flag?"Yes":"No")<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
