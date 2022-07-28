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
		stack<int>s,s1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(s.empty())
			{
				s.push(x);
			}
			else
			{
				if(x==1)
				{
					s.push(x);
				}
				else
				{

					if(s.top()+1==x)
					{
						s.pop();
						//cout<<"hh"<<endl;
						s.push(x);
					}
					else
					{
						while(!(s.top()+1==x))
						{
							s.pop();
							//cout<<"h"<<endl;
 										
						}
						s.pop();
						s.push(x);

					}

				}

			}
			s1=s;
			std::vector<int>v;
			while(!s1.empty())
			{
				v.push_back(s1.top());
				s1.pop();

			}
			for(int j=v.size()-1;j>=0;j--)
			{
				
				if(v.size()==1)

					cout<<v[j];
				else if(j>0)
				{
					cout<<v[j]<<".";
				}
				else
				{
					cout<<v[j];
				}
								

			}
			cout<<endl;

		}
	}
}					