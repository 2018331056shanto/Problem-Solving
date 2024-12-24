#include<bits/stdc++.h>
using namespace std;
long long int inf=1e15;
long long int countzero(long long int mid)
{
	long long int zero=0;
	for(long long int i=5;i<=mid;i*=5)
	{
		zero+=(mid/i);
	}
	return zero;

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	int cs=1;
	while(t--)
	{
		cout<<"Case "<<cs<<": ";
		cs++;
	   int q;
	   cin>>q;
	   long long int l=0;
	   long long int h=inf;
	   long long int zero;
	   long long int ans=-1;
	   while(l<=h)
	   {
	   	 long long int mid=(l+h)/2;
	   	 zero=countzero(mid);
	   	 if(zero>q)
	   	 {
	   	 	h=mid-1;
	   	 }
	   	 else if(zero<q)
	   	 {
	   	 	l=mid+1;
	   	 }
	   	 else
	   	 {
	   	 	ans=mid;
	   	 	h=mid-1;

	   	 }

	   }
	   if(ans==-1)
	   {
	   	cout<<"impossible"<<endl;
	   }
	   else
	   {
	   	cout<<ans<<endl;
	   }

	}
}	