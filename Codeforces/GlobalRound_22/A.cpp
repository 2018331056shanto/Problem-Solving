#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	vector<int>v(n,0),zero,one;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(v[i]==0){
			zero.push_back(x);
		}
		else
		{
			one.push_back(x);
		}
	}
	sort(zero.begin(),zero.end(),greater<>());
	sort(one.begin(),one.end(),greater<>());

	int cntz=zero.size();
	int cnto=one.size();

	if(cntz<cnto){

		long long sum=0;

		sum+=one[cnto-1];
		int k=0;
		for(int i=0;i<cntz;i++)
		{
			sum+=(2*zero[i]);

			sum+=(2*one[i]);
			k++;
		}
		for(k;k<cnto-1;k++)
		{
			sum+=one[k];
		}
		cout<<sum<<endl;
	}
	else if(cnto<cntz){

		long long sum=0;

		sum+=zero[cntz-1];
		int k=0;
		for(int i=0;i<cnto;i++)
		{
			sum+=(2*one[i]);

			sum+=(2*zero[i]);
			k++;
		}
		for(k;k<cntz-1;k++)
		{
			sum+=zero[k];
		}
		cout<<sum<<endl;
	}
	else{

		if(one[cnto-1]<zero[cntz-1])
		{
			long long sum=0;
			sum+=one[cnto-1];
			for(int i=0;i<cnto-1;i++)
			{
				sum+=(2*one[i]);
			}
			for(int i=0;i<cntz;i++)
			{
				sum+=(2*zero[i]);
			}
			cout<<sum<<endl;
		}
		else{

			long long sum=0;
			sum+=zero[cntz-1];
			for(int i=0;i<cntz-1;i++)
			{
				sum+=(2*zero[i]);
			}
			for(int i=0;i<cnto;i++)
			{
				sum+=(2*one[i]);
			}
			cout<<sum<<endl;
		}
	}

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
