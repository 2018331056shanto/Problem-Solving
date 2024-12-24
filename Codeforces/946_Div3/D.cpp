#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	string s;
	cin>>s; 

	int no=0,so=0,ea=0,we=0;

	string ans="";
	for(int i=0;i<n;i++)
	{
		if(s[i]=='N')
		{
			if(so>0)
			{
				so--;
			}
			else
			{
				no++;
			}
		}
		else if(s[i]=='S')
		{
			if(no>0)
			{
				no--;
			}
			else
			{
				so++;
			}
		}
		else if(s[i]=='E')
		{
			if(we>0)
			{
				we--;
			}
			else
			{
				ea++;
			}
		}
		else if(s[i]=='W')
		{
			if(ea>0)
			{
				ea--;
			}
			else
			{
				we++;
			}
		}
	}

	cout<<no<<" "<<so<<" "<<ea<<" "<<we<<endl;



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
