#include<bits/stdc++.h>
using namespace std;

bool find_cycle(vector<int>&a,int x)
{
	int cur=a[x];
	int it=0;
	while(it<30)
	{
		if(cur==-1){
			return true;

		}
		if(a[cur]==x)
			return false;
		cur=a[cur];
		it++;
	}
	return false;
}

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>a(30,-1);
	long long taken[27]={};
	for(int i=0;i<n;i++)
	{
		char c=s[i];
		int x=(int)c-(int)'a';
		// cout<<x<<endl;
		if(a[x]!=-1)
			continue;

		for(int j=0;j<26;j++)
		{
			if(!taken[j])
			{

				a[x]=j;
				bool flag=find_cycle(a,x);
				if(flag)
				{
				
					a[x]=j;
					taken[j]=1;
					break;
				}
				a[x]=-1;
			}
			

		}


	}
	int k=0;
	// for(auto l:a)
	// 	cout<<l<<endl;
	for(k=0;k<26;k++)
		if(taken[k]==0)break;
      if(k!=26)
        for(int j=0;j<=26;j++)
          if(a[j]==-1)a[j]=k;
      for(k=0;k<n;k++)
        cout<<(char)('a'+a[s[k]-'a']);
        cout<<endl;

	

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
