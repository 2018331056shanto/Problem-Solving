#include<bits/stdc++.h>
using namespace std;
void st(string s)
{
	int idxat=0;
	int idxdot=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='@')
		{
			idxat=i+1;
		}
		if(s[i]=='.')
		{
			idxdot=i+1;
		}
	}
	cout<<idxat<<" "<<idxdot<<" "<<s.size()-idxdot<<endl;
	if(idxdot>idxat+1&&idxat!=1&&(s.size()-idxdot)>0)
	{
		cout<<"Valid Mail"<<endl;
	}
	else
	{
		cout<<"Not Valid Mail"<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	cin>>s;
	st(s);
}	