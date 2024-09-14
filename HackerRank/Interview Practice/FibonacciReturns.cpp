#include<bits/stdc++.h>
using namespace std;
std::vector<string> v(101);


string getBigIntegerSum(string a,string b)
{
	bool flag=false;
	if(a.length()<b.length())
	{
		swap(a,b);
	}

	string integerSum="";
	for(int i=b.length()-1;i>=0;i--)
	{
		int x=a[(a.length()-b.length())+i]-'0';
		int y=b[i]-'0';

		int z=x+y;
		if(flag)
			z++;

		if(z>9)
		{
			int mod=z%10;
			flag=true;
			integerSum+=to_string(mod);
		}
		else
		{
			integerSum+=to_string(z);
			flag=false;

		}

	}


	for(int i=a.length()-b.length()-1;i>=0;i--)
	{
		int x=a[i]-'0';

		if(flag)
			x++;
		if(x>9)
		{
			int mod=x%10;
			flag=true;
			integerSum+=to_string(mod);
		}
		else
		{
			integerSum+=to_string(x);
			flag=false;
		}

	}

	if(flag)
	{
		integerSum+="1";
	}

	reverse(integerSum.begin(),integerSum.end());

	return integerSum;
}

void solve(){
	

	v[0]=v[1]="1";

	for(int i=2;i<=100;i++)
	{
		string x=v[i-1];
		string y=v[i-2];

		
		v[i]=getBigIntegerSum(x,y);
		// cout<<v[i]<<endl;
		
	}
	// getNumber("8222","13");

	int n;
	while(cin>>n)
	{
		if(n==0)
	{
		cout<<0<<endl;
		
	}
	else
	{
		


		cout<<v[n-1]<<endl;
	}
		
	}
	


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
