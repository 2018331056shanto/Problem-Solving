#include<bits/stdc++.h>
using namespace std;

int pow(int a,int b)
{
	if(b==0)
		return 1;
	return b==1?a:a*pow(a,b-1);
}

void ans(int a,int b)
{
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}

void solve(){
	
	int a,b,c;
	long long k;
	cin>>a>>b>>c>>k;

	

	bool flag=false;

	for(int i=pow(10,a-1);i<pow(10,a);i++)
	{
		int l=max(pow(10,b-1),pow(10,c-1)-i);
		int r=min(pow(10,b)-1,pow(10,c)-1-i);

		if(l>r)
			continue;

		int h=r-l+1;

		if(k<=h)
		{
			ans(i,l+k-1);
			flag=true;
			break;
		}
		k-=h;
	}

	if(!flag)
	{
		cout<<-1<<endl;
	}


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
