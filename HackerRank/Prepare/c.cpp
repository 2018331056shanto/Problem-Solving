#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	
	getline(cin,s);
int cnt=0;
	bool flag=false;
	vector<pair<string,int>>ans;
	stack<pair<string,int>>st;
	int n=s.length();
	int i=0;
	int sum=0;

	int Flast=0;
	int lastF=0;
	while(i<n)
	{

		if(s[i]=='<')
		{
			string tmp="";
			if(s[i+1]!='/')
			{
				++i;
				while(s[i]!='>')
				{
					tmp+=s[i];
					i++;
				}
				// ++i;
				
				
				st.push({tmp,i});
			}
			else if(s[i+1]=='/')
			{
				++i;
				++i;
				while(s[i]!='>')
				{
					tmp+=s[i];
					i++;
				}
				
				if(st.top().first==tmp)
				{

					int f=st.top().second;
					int l=(i-tmp.size()-2);
					st.pop();
					int cnt=0;

					{

						int k=f+1;
						Flast=k;
						lastF=l;
					while(k<l)
					{
						if(s[k]=='<')
						{

							while(s[k]!='>')
							{
								k++;
							}
							++k;
							continue;
						}

						if(s[k]==' ')
						{
							k++;
							continue;
						}
						cnt++;
						k++;

					}
					
					if(cnt==0)
						continue;
					else
					{
						ans.push_back({tmp,cnt});
					}
					
				}
				flag=true;

					}
					
			}
			
		}
		i++;


		
	}
	

	sort(ans.begin(),ans.end());

	for(auto [x,y]:ans)
	{
		cout<<x<<": "<<y<<endl;
	}
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
