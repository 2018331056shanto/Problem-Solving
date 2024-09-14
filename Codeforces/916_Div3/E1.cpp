// #include<bits/stdc++.h>
// using namespace std;


// void solve(){
	
// 	int n;
// 	cin>>n;
	
// 	vector<int>a(n),b(n);

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>b[i];
// 	}

// 	vector<pair<int,int>>v;

// 	for(int i=0;i<n;i++)
// 	{
// 		v.push_back({(a[i]+b[i]),i});
// 	}
// 	sort(v.begin(),v.end(),greater<>());

// 	long long ans=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(i%2==0)
// 		{
// 			ans+=a[v[i].second]-1;
// 		}
// 		else
// 		{
// 			ans-=b[v[i].second]-1;
// 		}
// 	}

// 	cout<<ans<<endl;

	
// }


// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		int t;
// 		cin>>t;
// 		while(t--)
// 		{
// 			solve();
// 		}
// 	}



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,m,k;
    cin>>n>>m>>k;
    
    
    vector<vector<int>>v(n+1,vector<int>(m+1,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    
    vector<pair<pair<int,int>,int>>zero;
    
    for(int j=0;j<m;j++)
    {
        int ze=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][j]==0)
            {
                ze+=1;
            }
        }
        zero.push_back({{ze,j},(m-ze)});
    }
    
    sort(zero.begin(),zero.end(),greater<>());
    
    vector<int>col;
    stack<pair<int,int>>st;
    int kk=k;
    for(auto x:zero)
    {
    	if(kk<0||x.first.first<=x.second)
    	{
    		break;
    	}

    	else
    	{
    		st.push({x.first.first,x.first.second});
    		col.push_back(x.first.second);
    		kk--;
    	}
    }

    if(kk==0)
    {
    	for(int i=0;i<col.size();i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			v[j][col[i]]^=1;
    		}
    	}
    	
    }
    else{
    	int remain=k-kk;

    	if((k-col.size())%2==0)
    	{
    		for(int i=0;i<col.size();i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			v[j][col[i]]^=1;
    		}
    	}
    	}
    	else{

    		col.pop_back();
    			for(int i=0;i<col.size();i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			v[j][col[i]]^=1;
    		}
    	}

    	}

    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
    	int total=0;
    	for(int j=0;j<m;j++)
    	{
    		if(v[i][j])
    		{
    			total+=1;
    		}
    	}
    	if(total==m)
    	{
    		ans++;
    	}
    	
    }
    cout<<ans<<endl;
   
    
    return 0;
}
