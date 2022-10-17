#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>v(n);
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(s[i]=='1')
		{
			sum+=v[i];
		}
	}
	// No Lid Can Be Moved More Than Once
	//have to make less iteration
	int it=0;
	// cout<<sum<<endl;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		it++;
		if(s[i]=='1')
		{
			continue;
		}
		int temp=v[i];	
		int cntone=0;

		// cout<<"tem :"<<temp<<endl;
		for(int j=i+1;j<n;j++)
		{
			it++;
			if(s[j]=='1')
			{
				long long temsum=sum;
				if((j-i-1)!=cntone)
				{
					// cout<<s<<endl;
					// cout<<i<<" "<<j<<endl;
					// i=j;
					break;
				}
			
				sum-=v[j];
				
				sum+=v[i];
				if(temsum<sum)
				{
					// cout<<"sum :"<<sum<<endl;
					s[j]='0';
					s[i]='1';
					break;

				}
				else
				{
					sum=temsum;
					cntone++;				
				}

			}
		
		}
	}	
	// cout<<s<<endl;
	cout<<sum<<endl;
	// cout<<"nn :"<<it<<endl;
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
