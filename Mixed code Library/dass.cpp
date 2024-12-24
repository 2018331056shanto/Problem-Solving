#include<bits/stdc++.h>
using namespace std;
void fun(string s)
{
	int edge=0;
	std::vector<int> dig;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]=='(')
		{
			continue;

		}
		else
		{
		    dig.push_back(s[i]-48);

		}
	}
	int d=0;
	for(int i=dig.size()-1;i>=0;--i)
	{
		//cout<<dig[d]<<" "<<pow(10,i)<<endl;
		edge+=dig[d]*pow(10,i);
		cout<<edge<<endl;
		d++;
	}
	if(dig.size()==3)
	{
		edge=edge+1;
	}
	cout<<edge<<endl;
}
int main()
{
	
	string s;
	cin>>s;
	fun(s);
}
		

		