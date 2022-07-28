#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		char c=s[0];
		char b='0';
		char d='0';
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!=c)
			{
				b=s[i];
				break;
			}
		}
		int x=0;
		bool flag=false;
		bool flag1=false;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==c)
			{
				
				x++;
			}
			else if(s[i]==b)
			{
				x--;
			
			}
			else
			{

				if(x<0)
				{
					
					break;
				}
				else if(x>0)
				{
					if(flag1)
					{
						x++;
					}
					else
					{
						 x--;
					     flag=true;
					}
                   
				}
				else
				{
					if(flag)
					{
						x--;
					}
					else
					{
						x++;
						flag1=true;
					}
				}
			}

		}
		if(x==0&&s[s.size()-1]!=c)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	