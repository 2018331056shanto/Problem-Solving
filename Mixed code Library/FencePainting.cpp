#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		//cout<<m<<endl;
		std::vector<int>colora,colorb,colorc;
		for(int i=0;i<n;i++)
		{
			int y;
			cin>>y;
			colora.push_back(y);
		}
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			colorb.push_back(x);
		}
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			colorc.push_back(x);
		}
	    if(colora==colorb)
	    {
	    	bool flag=false;
	    	int idx=0;
	    	for(int i=0;i<n;i++)
	    	{
	    		if(binary_search(colorc.begin(),colorc.end(),colorb[i]));
	    		{
	    			flag=true;
                    idx=i+1;
                    break;

	    		}

	    	}
	    	if(flag)
	    	{
	    		cout<<m<<endl;
	    		cout<<"YES"<<endl;
	    		for(int i=0;i<m;i++)
	    		{
	    			cout<<idx<<" ";
	    		}
	    		cout<<endl;
	    	}
	    	
	    }

	}
}