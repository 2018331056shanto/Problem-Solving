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
		int n,k;
		cin>>n>>k;
		std::vector<int> v,v1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			v1.push_back(x);
		}
		int flag=0;
		for(int i=0;i<k-1;i++)
		{
			for(int j=0;j<n-1;j++)
				{
					if(v[j]>=v[j+1])
					{
						continue;
					}
					else
					{
						v[j]=v[j]+1;
						flag=j;
						/*for(int k=0;k<n;k++)
						{
							cout<<v[k]<<" ";
						}
						cout<<endl;
						*/
						
						
						break;

					}
				}
				if(v1!=v)
				{
					v1=v;
				}
				else{
					break;
				}
				/*for(int k=0;k<n;k++)
				{
					cout<<v1[k]<<" ";
				}
				cout<<endl;
				*/
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]>=v[i+1])
			{
				flag=i;
				continue;
			}
			else
			{
				flag=i;
				break;
			}
		}
		if(flag+1==n)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<flag+1<<endl;
		}
		//cout<<flag<<endl;
	}
}