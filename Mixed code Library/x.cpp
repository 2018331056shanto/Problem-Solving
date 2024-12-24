#include<bits/stdc++.h>
using namespace std;
bool valid(string id)
{
	if(id.size()==7)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string id;
	cin>>id;
	bool v=valid(id);
	if(v)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}	