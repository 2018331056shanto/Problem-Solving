#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	double pi,ex,digits,e;
		pi=acos(-1);
		ex=exp(1);
	while(t--)
	{
		int n;
		cin>>n;
		
		//cout<<ex<<" "<<pi<<endl;
		digits=log10(sqrt(2*pi*n));
		digits+=n*log10(n/ex);
		if(n==1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<(int)ceil(digits)<<endl;
		}
	}
}	