#include<bits/stdc++.h>
using namespace std;
int a[100000];
int bsearch(int low,int high,int val)
{

	if(high>=low)
		{

			//kk=high;
	 int mid=(low+high)/2;
	 //cout<<mid<<endl;
	if(a[mid]==val)
		return mid;
	if(a[mid]>val)
		 return bsearch(low,mid-1,val);
	if(a[mid]<val)
		return bsearch(mid+1,high,val);

}
return low;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int m;
	cin>>m;
	
	cout<<sum<<endl;
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		long long int ss=sum;
		ss=sum;
	   int x,y;
	   cin>>x>>y;
	   if(sum-x>y)
	   {


	   	cout<<0<<endl;
	   	continue;
	   }
	  int k= bsearch(0,n-1,x);
	  //cout<<a[k]<<endl;
	  if(k==0)
	  {
	  	cnt=0;
	  	ss-=a[k];
	  }
	  	
	  
	 else if(abs(x-a[k-1])>abs(x-a[k]))
	  {
	  	cnt=0;
	  	ss-=a[k];
	  }
	  	
	  else
	  {
	  	cnt=abs(x-a[k-1]);
	  	ss-=a[k-1];

	  }
	  //cout<<cnt<<endl;
	
	  if(y>ss)
	  {
	  	cout<<cnt+(y-ss)<<endl;
	  }
	  else
	  	cout<<cnt<<endl;
	}
}	