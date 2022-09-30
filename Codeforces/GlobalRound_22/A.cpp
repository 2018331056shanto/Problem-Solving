#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n,0),v1(n,0),vzero,vone;
	for(int i=0;i<n;i++)

	{
		cin>>v[i];
	}
	for(int i=0;i<n;i++)

	{
		cin>>v1[i];
		if(v[i]==0)
		{
			vzero.push_back(v1[i]);
		}
		else
		{
			vone.push_back(v1[i]);
		}
	}
	
	sort(vone.begin(),vone.end(),greater<>());

	sort(vzero.begin(),vzero.end(),greater<>());

	int zero=vzero.size();
	int one=vone.size();
	if(zero==0)
	{
		long long sum=0;
		for(auto x:vone)
			sum+=x;
		cout<<sum<<endl;
	}
	else if(one==0){
		long long sum=0;
		for(auto x:vzero)
			sum+=x;
		cout<<sum<<endl;
	}
	else{
		if(zero<=one){
			long long sum=0;
			if(vone[one-1]<vzero[zero-1])
			{
				sum+=vone[one-1];
				int i=0;int j=0;
				for(;i<one-1;i++)
				{
				
				
					if(j<zero)
					{
						sum+=(2*vzero[j]);
						// cout<<"vzero :"<<vzero[j]<<endl;
						j++;
					}
					else
					{
						break;
					}
				
				// cout<<"vone :"<<vone[i]<<endl;
				sum+=2*vone[i];

				}
				sum+=2*vzero[zero-1];

				
				cout<<sum<<endl;

			}
			else
			{

				sum+=vzero[zero-1];
				int i=0;int j=0;
				for(;i<zero-1;i++)
				{
				
				
					if(j<one)
					{
						sum+=(2*vone[j]);
						// cout<<"vzero :"<<vzero[j]<<endl;
						j++;
					}
					else
					{
						break;
					}
				
				// cout<<"vone :"<<vone[i]<<endl;
				sum+=2*vzero[i];

				}
				sum+=2*vone[one-1];

				
				cout<<sum<<endl;
			}
			
			// cout<<sum<<endl;
		
			
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
