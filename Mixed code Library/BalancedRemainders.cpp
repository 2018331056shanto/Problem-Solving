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
		int n;
		cin>>n;
		int c0,c1,c2;
				c0=c1=c2=0;
				int zero=0;
				for(int i=0;i<n;i++)
				{
					int x;
					cin>>x;
					
					if(x%3==0)
					{
						c0++;
					}
					else if(x%3==2)
					{
						c2++;
					}
					else
					{
						c1++;
					}
					
				}

		}
		int k=n/3,cc0,cc1,cc2;
		cc0=c0-k;
		cc1=c1-k;
		cc2=c2-k;
		if(cco>=0 &&cc1>=0)
			cout<<cc0*2+cc1<<endl;
		else if(cc0>=0 && cc2>=0)
			cout<<cc2*2+cc0<<endl;
		else if(cc0>=0 &&cc1<0)
			cout<<-cc1+(cc2)*(-2)<<endl;
		else if
		
		

	}
