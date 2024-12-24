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
		string s;
		cin>>s;
		int cnt=0;
		string k;
		k=s;
		sort(k.begin(), k.end());
		for(int i=0;i<n;i++)
		{
			if(k[i]!=s[i])
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}	