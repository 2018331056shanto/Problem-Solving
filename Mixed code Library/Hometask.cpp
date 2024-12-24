#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		v[i]=0;
	}
	bool zero=false;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==0)
		{
			zero=true;
		}
		sum+=v[i];

	}	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	 if(sum==0)
	{
		cout<<0<<endl;
		
	}
	else if(zero)
	{
		if(sum%3==0)
		{
			
			for(int i=0;i<n;i++)
			{
				cout<<v[i];
			}
			cout<<endl;
			
		}
		else
		{
			int excess=sum%3;
			int sum1=sum;
			if(excess==1)
			{
				bool flag=false;
				for(int i=n-1;i>=0;i--)
				{
					if(v[i]%3==1)
					{
						sum1-=v[i];
						v[i]=-1;
						flag=true;
						break;
					}
				}
				if(flag)
				{
					if(sum1==0)
					{
						cout<<0<<endl;
					}
					else
					{
						for(int i=0;i<n;i++)
					{
						if(v[i]!=-1)
						{
							cout<<v[i];
						}
					}
					cout<<endl;
					}
					
					
				}
				else
				{
					int cnt=0;
					// cout<<"fuck"<<endl;
					for(int i=n-1;i>=0;i--)
					{
						if(v[i]%3==2)
						{

							if(cnt==2)
							{
								break;
							}
							sum1-=v[i];
							cnt++;
							v[i]=-1;
						}
					}
					if(sum1==0)
					{
						cout<<0<<endl;
					}
					else
					{
						for(int i=0;i<n;i++)
					{
						if(v[i]!=-1)
						{
							cout<<v[i];
						}
						
					}cout<<endl;
					}
					
					
					
				}
				
			}
			if(excess==2)
			{
				bool flag=false;
				for(int i=n-1;i>=0;i--)
				{
					if(v[i]%3==2)
					{
						sum1-=v[i];
						v[i]=-1;
						flag=true;
						break;
					}
				}
				if(flag)
				{
					if(sum1==0)
					{
						cout<<0<<endl;
					}
					else
					{
						for(int i=0;i<n;i++)
					{
						if(v[i]!=-1)
						{
							cout<<v[i];
						}
					}
					cout<<endl;
					}
					
					
				}
				else
				{
					int cnt=0;
					for(int i=n-1;i>=0;i--)
					{
						if(v[i]%3==1)
						{
							if(cnt==2)
							{
								break;
							}
							sum1-=v[i];
							cnt++;
							v[i]=-1;
						}
					}
					if(sum1==0)
					{
						cout<<0<<endl;
					}
					else
					{
						for(int i=0;i<n;i++)
					{
						if(v[i]!=-1)
						{
							cout<<v[i];
						}
					}
					cout<<endl;
					}
					
					
				}
					
			}
		}

	}
	else
	{
		cout<<-1<<endl;
	}

	
}
