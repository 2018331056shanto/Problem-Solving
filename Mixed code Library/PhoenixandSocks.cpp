// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,l,r;
// 		cin>>n>>l>>r;
// 		int ans=0;
// 		map<int,int>mp;
// 		for(int i=0;i<n;i++)
// 		{
// 			int x;
// 			cin>>x;
// 			mp[x]++;
// 		}
// 		if(l>r)
// 		{
// 			ans+=(l-r)/2;


// 		}
// 		else
// 		{
// 			ans+=(r-l)/2;
// 		}
// 		int k=0;
// 		if(l<n/2)
// 		{
// 			for(auto x:mp)
// 		{
// 			//cout<<"ll "<<l<<endl;
// 			if(l+x.second<=n/2||x.second<=n/2)
// 			{
// 				l+=x.second;
// 				if(x.second<=n/2&&l<=n/2)
// 			{
// 				k+=x.second;
// 				//cout<<"k "<<k<<endl;
// 				l+=x.second;
// 				//cout<<"l "<<l<<endl;
// 			}
// 			}
			
// 		}
// 		}
// 		else if(r<n/2)
// 		{	for(auto x:mp)
// 		{
// 			if(x.second+r<=n/2||x.second<=n/2)
// 			{
// 				r+=x.second;
// 				if(x.second<=n/2&&r<=n/2)
// 			{

// 				k+=x.second;
// 				//cout<<k<<endl;
// 				r+=x.second;
// 				//cout<<r<<endl;
// 			}
// 			}
			
// 		}

// 		}
// 		else
// 		{
// 			for(auto x:mp)
// 		{
// 			if(x.second<n/2)
// 			{

// 				k+=x.second;
// 				//cout<<k<<endl;
// 				//r+=x.second;
// 				//cout<<r<<endl;
// 			}
// 		}
// 		}

		
// 		cout<<ans+k<<endl;
// 	}
// }	