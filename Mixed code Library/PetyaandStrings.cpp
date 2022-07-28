#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	for_each(a.begin(), a.end(), [](char & c) {
        c = ::tolower(c);
    });
    for_each(b.begin(), b.end(), [](char & c) {
        c = ::tolower(c);
    });
    // cout<<a<<" "<<b<<endl;
	if(a<b)
	{
		cout<<-1<<endl;
	}
	else if(a==b)
	{
		cout<<0<<endl;


	}
	else
	{
		cout<<1<<endl;
	}
	
}