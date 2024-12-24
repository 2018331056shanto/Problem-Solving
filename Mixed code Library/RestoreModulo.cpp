#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v,v1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			v1.push_back(x);
		}
		
		sort(v1.begin(),v1.end());
		int m=0,c=0;
		for(int i=0;i<n;i++)
		{
			if(v[i+1]>v[i])
			{
				c=v[i+1]-v[i];
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]>=v[i+1])
			{
				m=(v[i]+c-v[i+1]);
				break;
			}
		}
		//cout<<c<<" "<<m<<endl;

		bool flag=true;
		bool flag1=false;
		if(v[0]%m!=v[0])
		{
			//cout<<"v[0]"<<endl;
			flag=false;
		}
		else if(v1[0]==v1[n-1])
		{
		   flag1=true;
		}
		else
		{
			for(int i=1;i<n;i++)
			{
				if((v[i-1]+c)%m!=v[i])
				{
					//cout<<"not match"<<endl;
					flag=false;
					//cout<<m<<" "<<c<<endl;
					//cout<<(v[i-1]+c)%m<<" "<<v[i]<<endl;
					break;
				}
				
			}
		}
		if(flag1)
		{
			cout<<"0"<<endl;
		}
		else if(flag)
		{
			cout<<m<<" "<<c<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		v.clear();
		v1.clear();
		

	}
}	