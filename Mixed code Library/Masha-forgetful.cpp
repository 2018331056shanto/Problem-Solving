#include<bits/stdc++.h>
using namespace std;
int sz=0;
int arr[100];
int vis[20];
std::vector<pair<int,pair<int,int>>>anS;
int binarySearch(int val,int start,int end)
{
	int mid=(start+end)/2;
	// cout<<"midd  "<<mid<<endl;
	if(start>end)
		return -1;
	if(val==anS[mid].first)
	{
		// cout<<"mid  "<<val<<endl;
		return mid;
	}
	 if(val>anS[mid].first)
	 {
	 	return binarySearch(val,mid+1,end);
	 }
	 if(val<anS[mid].first)
	 {
	 	return binarySearch(val,start,mid-1);
	 }
	// cout<<"fuck you "<<mid<<endl;
	return -1;
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{

		string aans;
		int n,m;
		cin>>n>>m;
		int cnt=0;
		memset(arr,0,sizeof(arr));
		memset(vis,0,sizeof(vis));
		anS.clear();
		// cout<<"size  "<<anS.size()<<endl;
		vector<pair<pair<int,int>,int>>ans;
		vector<string>s;
		for(int i=0;i<n;i++)
		{
			string st;
			cin>>st;
			s.push_back(st);
		}
	    string st;
	    cin>>st;
	    sz=0;
	    sz=st.size();
	    for(int i=1;i<st.size();i++)
	    {
	    	vis[st[i]-48]++;
	    	// string l=st[i-1];
	    	// cout<<(st[i]-48)*2<<endl;
	    	int prev=st[i-1]-48;
	    	// string k=st[i];
	    	int next=st[i]-48;
	    	arr[next*prev]++;
	    	anS.push_back({next*prev,{prev,next}});
	    }
	    sort(anS.begin(),anS.end());
	    // for(int i=0;i<100;i++)
	    // {
	    // 	if(arr[i]>0)
	    // 		cout<<arr[i]<<" ";
	    // }
	    // cout<<endl;
	    
	    for(int i=0;i<n;i++)
	    {
	    	string x=s[i];
	    	for(int j=1;j<x.size();j++)
	    	{
	    		int prev=x[j-1]-48;
	    		int next=x[j]-48;
	    		int mul=prev*next;
	    		// cout<<mul<<endl;
	    		if(arr[mul]>0)
	    		{
	    			// cout<<"hi mul "<<arr[mul]<<endl;
	    		 
	    			// cout<<"mul  "<<mul<<endl;
	    			int idx=binarySearch(mul,0,m);
	    			// cout<<"id "<<idx<<endl;
	    		if(idx<0)
	    		{
	    			continue ;
	    		}
	    		if(anS[idx].second.first==prev&&anS[idx].second.second==next)
	    		{
	    			// cout<<prev<<" "<<next<<endl;
	    			anS[idx].first=-1;
	    			arr[mul]--;
	    			// cout<<"minus  "<<arr[mul]<<endl;
	    			vis[prev]--;
	    			vis[next]--;
	    			ans.push_back({{j,j+1},i+1});
	    		}
	    		}
	    		// cout<<mul<<endl;
	    		
	    		// cout<<anS[idx].first<<" "<<anS[idx].second.first<<" "<<anS[idx].second.second<<endl;
	    		// cout<<idx<<endl;
	    	}
	    }
	    // cout<<cnt<<endl;
	    // cout<<aans<<endl;
	    bool flag=false;
	    for(int i=0;i<10;i++)
	    {
	    	 cout<<vis[i]<<" ";
	    	if(vis[i]>0)
	    	{
	    		flag=true;

	    	}
	    	
	    }
	     // cout<<endl;
	    if(flag)
	    {
	    	cout<<-1<<endl;
	    }
	    else
	    {
	    	cout<<ans.size()<<endl;
	    	for(auto x:ans)
	    	{
	    		cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;

	    	}
	    }
	    // for(int i=0;i<anS.size();i++)
	    // {
	    // 	cout<<anS[i].first<<" "<<anS[i].second.first<<" "<<anS[i].second.second<<endl;
	    // }
		

	}	
	
}
