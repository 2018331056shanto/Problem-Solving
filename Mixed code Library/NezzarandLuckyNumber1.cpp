#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int q,d;
		cin>>q>>d;
		std::vector<int> v;
		for(int i=0;i<q;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<q;i++)
		{
			if(v[i]%d==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				if(d%2==0)
				{
					if(v[i]%2==1)
					{
						cout<<"NO"<<endl;
					}
					else
					{
						if(v[i]>=d*5)
						{
							cout<<"YES"<<endl;
						}
						else
						{
							bool flag=false;
							int l=d;

							for(int j=2;j<=5;j++)
							{
								if(v[i]%10==l%10&&l<=v[i])
								{
									flag=true;
									break;

								}
								l+=d;
								flag=false;

							}
							if(flag)
							{
								cout<<"YES"<<endl;
							}
							else
							{
								cout<<"NO"<<endl;
							}
						}
					}
				}
				else
				{
					if(v[i]>=d*10)
					{
						cout<<"YES"<<endl;
					}
					else
					{
						int l=d;
						bool flag=false;
						for(int j=2;j<=10;j++)
						{
							if(v[i]%10==l%10&&l<=v[i])
							{
								flag=true;
								break;
							}
							l+=d;
							flag=false;
						}
						if(flag)
						{
							cout<<"YES"<<endl;
						}
						else
						{
							cout<<"NO"<<endl;
						}
					}
				}
			}			
		}
	}
}