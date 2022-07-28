#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	//cout<<"fuck you"<<endl;
	cin>>t;
	while(t--)
	{
		//cout<<"bro"<<endl;
		int n,move;
		cin>>n>>move;
		string s,s1;
		//cout<<"fuck"<<endl;
		cin>>s;
		s1=s;
		//cout<<"balbal";
		//cout<<"hello"<<endl;
		     
		for(int j=0;j<move;j++)
		{
			//cout<<"hhh"<<endl;
			for(int i=1;i<n-1;i++)
			{
				//cout<<"bal"<<endl;
				
				
				
			    if(s[i]=='0'&&((s[i-1]=='0'&&s[i+1]=='1')||(s[i-1]=='1'&&s[i+1]=='0')))
					{
						s1[i]='1';
					}
					else
					{
						s1[i]=s[i];
					}
				
			}
			if(s[0]=='0'&&s[1]=='1')
				{
					s1[0]='1';
				}
				if(s[n-1]=='0'&&s[n-2]=='1')
				{
					s1[n-1]='1';
				}
			//cout<<s<<" "<<s1<<endl;
			if(s==s1)
				
			break;
			s=s1;

		}
		cout<<s<<endl;
		
		
	}
}	