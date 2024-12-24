#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,k;
	cin>>n>>k;
	vector<long long>v(k,0);
	for(int i=0;i<k;i++)
	{
		cin>>v[i];
		
	}	
	vector<long long>a;
	for(int i=1;i<k;i++)
	{
		long long dif=v[i]-v[i-1];
		a.push_back(dif);
	}
	if(k==1)
	{
		cout<<"YES"<<endl;
	}
	else if(!is_sorted(a.begin(),a.end())){

		cout<<"NO"<<endl;
		// cout<<"HH"<<endl;

	}
	else
	{

		 	long long dif=v[1]-v[0];
		 	
		 	long long difff=dif*(n-k+1);
		 	if(v[0]>difff){
		 		cout<<"NO"<<endl;
		 	}
		 	else
		 	{
		 		cout<<"YES"<<endl;
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
