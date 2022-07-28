#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int l=100-k;
	    if(k==1)
	    {
	    	cout<<100<<endl;
	    }
	    else
	    {
	    	int mn=1000;
	    	int sum=0;
	    	bool flag=false;
	    	for(int i=2;i<=100;i++)
	    	{
	    		if(k%i==0&&l%i==0)
	    		{
	    			int m=k/i;
	    			int o=l/i;
	    			sum=m+o;
	    			//cout<<sum<<" "<<m<<" "<<o<<endl;
	    			flag=true;

	    		}
	    		if(sum==0)
	    			continue;
	    		mn=min(sum,mn);
	    	}
	    	if(flag)
	    	{
	    		cout<<mn<<endl;
	    	}
	    	else
	    	{
	    		cout<<100<<endl;
	    	}
	    }
	}
}	