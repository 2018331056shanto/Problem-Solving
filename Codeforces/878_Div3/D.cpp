// #include<bits/stdc++.h>
// using namespace std;

// bool ok(int mid,int n,vector<int>&v)
// {
// 	int cur=-1e9+10;
// 	int used=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(abs(v[i]-cur)> mid)
// 		{
// 			used++;
// 			cur=v[i]+mid;
// 		}
// 	}
// 	return used<=3;
// }

// void solve(){
	
// 	int n;
// 	cin>>n;

// 	vector<int>v(n);
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}	

// 	sort(v.begin(),v.end());

// 	int l=0,r=2e9;
// 	while(l<r)
// 	{
// 		int mid=(l+r)/2;

// 		if(ok(mid,n,v))
// 		{
// 			r=mid;
// 		}
// 		else{
// 			l=mid+1;
// 		}
// 	}
// 	cout<<l<<endl;
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



#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int mx=0;

	int cnt=1;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]==0&&v[i+1]==0)
		{
			cnt++;
		}
		else
		{
		  
			mx=max(cnt,mx);
			cnt=1;
		}
	}
	cout<<mx<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
