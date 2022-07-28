#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll modI(ll a,ll m)
{
	ll m0=m,y=0,x=1;
	if(m==1)
	{
		return 0;
	}
	while(a>1)
	{
		ll q=a/m;
		cout<<"q "<<q<<endl;
		ll t=m;
		cout<<"t "<<t<<endl;
		m=a%m;
		cout<<"m "<<m<<endl;
		a=t;
		cout<<"a next "<<a<<endl;
		t=y;
		cout<<"t next "<<t<<endl;
		y=x-q*y;
		cout<<" y "<<y<<endl;
		x=t;
		cout<<" x next "<<x<<endl;
	}
	return x ;
}
int main()
{
	int x,y;
	cin>>x>>y;
	 cout<<modI(x,y)<<endl;
	
}	