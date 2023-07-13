#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	map<char,int>mp{{'A',1},{'B',10},{'C',100},{'D',1000},{'E',10000}};

	long long ans=0;
	string s;
	cin>>s;
	if(s.length()==1)
	{
		cout<<mp['E']<<endl;
		return;
	}
	// s+="A";
	char prevBig;
	int tempCnt=0;
	int tempCnt1=0;

	vector<pair<char,long long>>v;
	bool flag=false,flag1=false;
	// vector<int>v;
	int idx=-1;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='E')
		{
			idx=i;
			break;
		}
	}

	// cout<<"IDX :"<<idx<<endl;

	if(idx==-1)
	{
		s[0]='E';
	}
	else
	{
		char x='A';
		int idx2=-1;

		for(int i=0;i<idx;i++)
		{
			if(s[i]>=x&&s[i]!='E')
			{
				x=s[i];
				idx2=i;
			}
		}

		if(idx2==-1)
		{
			if(s.length()-1!=idx)
			{
				s[idx+1]='E';
			}
		}
		else
		{
			s[idx2]='E';
		}
		
	}

	cout<<s<<endl;

	for(int i=0;i<s.length()-1;i++)
	{

		{

			if(s[i]==s[i+1])
			{
				tempCnt+=mp[s[i]];
				// cout<<s[i]<<" "<<tempCnt<<endl;
			}

			else if(s[i] >s[i+1])
			{

				tempCnt+=mp[s[i]];
				// cout<<"tempCnt :"<<tempCnt<<endl;
				v.push_back({s[i],tempCnt});
				tempCnt=0;
			}
			else if(s[i]<s[i+1])
			{
				tempCnt+=mp[s[i]];
				// cout<<"less :"<<s[i]<<" "<<tempCnt<<endl;
				if(v.size()!=0)
				{
					auto x=v[0];
					if(x.first>=s[i+1])
					{
						ans-=tempCnt;
					}
					else
					{
						long long sum=0;

						for(auto y:v)
						{
							sum+=y.second;
						}
						ans-=sum;
						ans-=tempCnt;
						v.clear();

					}


				}
				else
				{
					ans-=tempCnt;
				}
				// cout<<"when next is greater :"<<ans<<endl;
				tempCnt=0;

			}
		}
	}
	// cout<<"temp cnt :"<<tempCnt<<endl;

// cout<<"after all adding sum :"<<ans<<endl;
for(auto x:v)
{
	// cout<<x.first<<" "<<x.second<<endl;
	ans+=x.second;
}
cout<<ans+mp[s[s.length()-1]]+tempCnt<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
