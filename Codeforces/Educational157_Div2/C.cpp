#include<bits/stdc++.h>
using namespace std;


bool isSafe(string &s)
{
	int firsthalf=0;
	int secondhalf=0;
	for(int i=0,j=s.length()-1;i<j;i++)
	{
		firsthalf+=s[i]-'0';
		secondhalf+=s[j]-'0';
	}
	if(firsthalf%2==0&&secondhalf%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);

	vector<string>even,odd;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		string x=to_string(v[i]);
		if(x.length()%2)
		{
			odd.push_back(x);
		}
		else
		{
			even.push_back(x);
		}
	}

	int ans=even.size()+odd.size();

	map<int,vector<string>>evst;

	for(int i=0;i<even.size();i++)
	{

		string s=to_string(even[i]);

		int firsthalf=0;
		int secondhalf=0;

		for(int j=0;k=s.length();i<j;i++,j--)
		{
			firsthalf+=s[i]-'0';
			secondhalf+=s[j]-'0';
		}

		int dif=abs(firsthalf-secondhalf);

		evst[dif].push_back(s);

	}

	

	

}



int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
