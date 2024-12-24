#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	int odd=0,even=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x%2)
			++odd;
		else
			++even;
	}
	if (odd% 4 == 2)
		cout << "Bob" << endl;
	else if (odd % 4 == 3)
		cout << "Alice" << endl;
	else if (odd % 4 == 0)
		cout << "Alice" << endl;
	else if (even % 2 == 1)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;

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
