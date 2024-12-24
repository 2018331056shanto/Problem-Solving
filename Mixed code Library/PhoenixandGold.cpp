#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		std::vector<int>v;
		int sum1=0;
		for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			sum1+=m;
			v.push_back(m);
			
		}
		if(sum1==x)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			int sum=0;
            for(int i=0;i<n-1;i++)
            {
            	sum+=v[i];
            	if(sum==x)
            	{
            		sum-=v[i];
            		sum+=v[i+1];
            		swap(v[i],v[i+1]);
            		//break;
            	}

            }
            for(int i=0;i<n;i++)
            {
            	cout<<v[i]<<" ";
            }
            cout<<endl;
        }
	}
}	