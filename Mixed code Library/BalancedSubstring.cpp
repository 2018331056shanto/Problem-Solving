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
		if(n==1)
		{
			cout<<-1<<" "<<-1<<endl;
		}
		else{
			bool flag=false;
			for(int i=0;i<n-1;i++)
		{
			if(s[i]=='a'&&s[i+1]=='b'||s[i]=='b'&&s[i+1]=='a')
			{
				flag=true;
				cout<<i+1<<" "<<i+2<<endl;
				break;
			}

		}
		if(flag==false)
		{
			cout<<-1<<" "<<-1<<endl;
		}

		}
		
	}
}	
