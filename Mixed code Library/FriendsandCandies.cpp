#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v;
		long long int sum=0;
		long long int need=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			sum+=x;
		}

		if(sum%n!=0)
		{
			cout<<-1<<endl;
		}
		else
			//cout<<sum/n<<endl;
		{
			for(int i=0;i<n;i++)
			{
				if(v[i]<sum/n)
				{
					need+=sum/n-v[i];
				}
			}
			//cout<<need<<endl;
			int k=0;
			sort(v.begin(),v.end(),greater<>());
			//cout<<v[0]<<endl;
			// if(v[0]==v[n-1])
			// 	cout<<0<<endl;
			
			
				for(int i=0;i<n;i++)
			{
				if(need==0)
					break;
				need-=(v[i]-sum/n);
	            k++;
			}
			cout<<k<<endl;
			
			


		}
	}
}	
