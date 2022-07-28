#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v;
		std::vector<std::vector<pair<int,int>>> vv(n*5,std::vector<pair<int,int>>(0));
	    for(int i=1;i<=n*5;i++)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
	    	//cout<<x<<endl;

	    }  
	   // cout<<v.size()<<endl;
	 
	    for(int i=0;i<5;i++)
	    {
	    	int c=0;
	    	//cout<<i<<endl;
	    	for(int j=i;j<v.size();j+=5)
	    	{
	    		//cout<<j<<endl;
	    		//cout<<v[j]<<" ";
	    		vv[i].push_back({v[j],++c});
	    		//cout<<vv[i][j].first<<" "<<vv[i][j].second<<endl;
	    	}
	    	//cout<<endl;
	    	

	    }
	    for(int i=0;i<5;i++)
	    {
	    	sort(vv[i].begin(),vv[i].end());
	    }
	    map<int,int>a;
	    for(int i=0;i<5;i++)
	    {
	    	a[vv[i][0].second]++;

	    }
	    int mx=0;
	    for(auto x:a)
	    {
	    	if(x.second>mx)
	    	{
	    		mx=x.second;
	    	}
	    }
	    bool flag=false;
	    int cnt=0;
	    for(auto x:a)
	    {
	    	if(mx==x.second)
	    	{
	    		cnt++;
	    	}
	    }
	    if(cnt>1)
	    {
	    	cout<<-1<<endl;
	    }
	    else
	    {
	    	for(auto x:a)
	    	{
	    		if(mx==x.second)
	    		{
	    			cout<<x.first<<endl;
	    			break;
	    		}
	    	}
	    }
	    
	}
}	