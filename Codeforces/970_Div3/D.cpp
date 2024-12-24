#include<bits/stdc++.h>
using namespace std;

vector<int>v;
string s;
int ans;
int find(int i,int last)
{
	if(s[i-1]=='0')
	{
		ans++;
	}

	return (v[i]==last?last:(v[i]==find(v[i],last)));

}

void solve(){
	
	int n;
	cin>>n; 

	v=vector<int>(n+1);

	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}

	cin>>s;

	
	for(int i=1;i<=n;i++)
	{
		ans=0;
		find(i,i);
		cout<<ans<<" ";
		

	}

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