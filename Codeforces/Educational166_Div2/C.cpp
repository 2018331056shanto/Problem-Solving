#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int p,t;
	cin>>p>>t;

	std::vector<int> prog(p+t+1),test(p+t+1);


	for(int i=0;i<p+t+1;i++)
	{
		cin>>prog[i];
	}

	for(int i=0;i<p+t+1;i++)
	{
		cin>>test[i];
	}


	int maxWeGet=0;

	unordered_map<int,bool>takePidx,takeTidx;

	vector<pair<int,int>>extraP,extraT;
	int n=p+t+1;
	for(int i=0;i<n-1;i++)
	{
		if(p==0)
		{
			extraP.push_back({prog[i],i});
		}
		if(t==0)
		{
			extraT.push_back({test[i],i});
		}

		// cout<<p<<" "<<t
		if(p>0&&prog[i]>test[i]||t==0)
		{
			// cout<<"prog "<<prog[i]<<endl;
			maxWeGet+=prog[i];
			takePidx[i]=true;
			--p;
		}
		else if(t>0&&test[i]>prog[i]||p==0)
		{
			cout<<"test : "<<test[i]<<endl;
			maxWeGet+=test[i];
			takeTidx[i]=true;
			--t;

		}

		
	}

	sort(extraP.begin(),extraP.end(),greater<>());

	sort(extraT.begin(),extraT.end(),greater<>());



	for(auto [a,b]:extraP)
		cout<<a<<" ";
	cout<<endl;

	for(auto a[a,b]:extraT)
		cout<<a<<" ";
	cout<<endl;
	// cout<<maxWeGet<<endl;
	// for(int i=0;i<n-1;i++)
	// {
	// 	if(test[i]>prog[i])
	// 	{
	// 		if(takeTidx.find(i))
	// 		{
	// 			maxWeGet-=test[i];

	// 			if(extraT[0])
	// 		}
	// 	}
	// }

	



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
