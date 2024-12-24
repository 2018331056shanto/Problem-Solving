// #include<bits/stdc++.h>
// using namespace std;


// void solve(){

// 	int n;
// 	cin>>n;
// 	vector<int>a(n),b;
// 	std::map<int, int> mp,mp1;
// 	priority_queue<int>pq;

// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		mp[a[i]]++;
// 		pq.push(a[i]);
// 	}
		

// 	for(int i=0;i<n;i++)
// 	{
// 		if(mp1[a[i]]==0)
// 		{
// 			b.push_back(a[i]);
// 			mp1[a[i]]++;
// 		}

// 		else if(mp1[a[i]]!=0)
// 		{

// 			int t=0;
			
// 				while(!pq.empty())
// 				{
// 					if(mp1[pq.top()]==mp[pq.top()])
// 					{
// 						pq.pop();
// 					}
// 					else
// 					{
// 						break;
// 					}
// 				}
			
// 			t=pq.top();
// 			b.push_back(t);
// 			pq.pop();
// 			mp1[t]++;

// 		}
// 	}

// 	for(auto x:b)
// 	{
// 		cout<<x<<" ";
// 	}
// 	cout<<endl;



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
	vector<int>a(n),b;
	std::map<int, int> mp,mp1;
	priority_queue<int>pq;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		pq.push(a[i]);
	}
		

	for(int i=0;i<n;i++)
	{
		if(mp1[a[i]]==0)
		{
			b.push_back(a[i]);
			mp1[a[i]]++;
		}

		else if(mp1[a[i]]!=0)
		{
			int t=pq.top();
			b.push_back(t);
			// pq.pop();
			mp1[t]++;

		}
	}

	for(auto x:b)
	{
		cout<<x<<" ";
	}
	cout<<endl;



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
