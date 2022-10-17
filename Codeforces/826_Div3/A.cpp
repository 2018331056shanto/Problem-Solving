#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string a,b;
	cin>>a>>b;
	if(a==b)
		cout<<"="<<endl;
	else {
		


		bool s=false;
		bool l=false;
		bool m=false;
		bool sb=false;
		bool lb=false;
		bool mb=false;

			for (int i = 0; i < a.size(); ++i)
			{

				if(a[i]=='L')
				{
					l=true;
				}
				else if(a[i]=='S')
					s=true;
				else if(a[i]=='M')
					m=true;

				/* code */
			}
			for (int i = 0; i < b.size(); ++i)
			{

				if(b[i]=='L')
				{
					lb=true;
				}
				else if(b[i]=='S')
					sb=true;
				else if(b[i]=='M')
					mb=true;

				/* code */
			}

			if(s&&sb&&a.size()<b.size())
			{
				cout<<">"<<endl;
			}
			
			else if(sb&&(l||m))
			{
				cout<<">"<<endl;
			}
			
			else if(l&&lb)
			{
				if(a.size()>b.size())
				{
					cout<<">"<<endl;
				}
				else{
					cout<<"<"<<endl;
				}
			}
			
			else if(l&&mb)
			{
				cout<<">"<<endl;
			}
			else
				cout<<"<"<<endl;

	}
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
