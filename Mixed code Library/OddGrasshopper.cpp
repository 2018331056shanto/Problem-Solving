#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin>>x>>n;
		long long ans=x;
	    if(x%2==0)
	    {
	    	long long div=n/4;
	    	
	    	for(long long i=div*4+1;i<=n;i++)
	    	{
	    		ans-=i;

	    		//cout<<i<<endl;
	    		if(i==n)
	    			break;
	    		i++;
	    		//cout<<"fuck"<<endl;
	    		ans+=i;
	    		//cout<<i<<endl;
	    		if(i==n)
	    			break;
	    		i++;
	    		//cout<<i<<endl;
	    		ans+=i;
	    		
	    		if(i==n)
	    			break;
	    	}
	    	cout<<ans<<endl;
	    }
	    else
	    {
	    	long long div=n/4;

	    	for(long long i=div*4+1;i<=n;i++)
	    	{
	    		ans+=i;

	    		//cout<<i<<endl;
	    		if(i==n)
	    			break;
	    		i++;
	    		//cout<<"fuck"<<endl;
	    		ans-=i;
	    		//cout<<i<<endl;
	    		if(i==n)
	    			break;
	    		i++;
	    		//cout<<i<<endl;
	    		ans-=i;
	    		
	    		if(i==n)
	    			break;
	    	}
	    	cout<<ans<<endl;
	    }
	}
}	