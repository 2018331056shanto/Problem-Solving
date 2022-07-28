#include<bits/stdc++.h>
using namespace std;
std::vector<string> v;
int main()
{
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
	unsigned long long s=1;
	v.push_back("1");
	for(int i=1;i<63;i++)
	{
		 s*=2;
		string ss=to_string(s);
		// cout<<ss<<endl;
		v.push_back(ss);
	}
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
	    int ans=1e8;
		for(int k=0;k<v.size();k++)
		{
			// cout<<"hcu"<<endl;
			string tem=v[k];
			string temn=n;
			int j=0;
			int cnt=0;
			int x=0;
			for(int i=0;i<tem.size();i++)
			{
				if(i!=x)
					break;
				for( j;j<temn.size();j++)
				{

					if(tem[i]==temn[j])
					{
						// cout<<"hello"<<endl;
						cnt++;
						j=j+1;
						x++;
						break;
					}
					
				}
				
			}	
			ans=min((int)tem.size()+(int)temn.size()-2*cnt,(int)ans);

			 // cout<<"cnt  "<<cnt<<"  string "<<tem<<endl;

		}
		cout<<ans<<endl;
		
	}

	
}