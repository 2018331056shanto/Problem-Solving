#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int prevOdd=0;
	int prevEven=0;
	bool oddSort=true;
	bool evenSort=true;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x%2)
		{
			if(x>=prevOdd)
			{
				prevOdd=x;
				
			}
			else
			{
				oddSort=false;
				prevOdd=x;
			}
			// cout<<"oddSort "<<oddSort<<endl;
			
			
		}
		else
		{
			if(x>=prevEven)
			{
				prevEven=x;

				
			}
			else
			{
				evenSort=false;
				prevEven=x;
			}
			 // cout<<"prevEven "<<evenSort<<endl;
		}
	}
	if(oddSort==true&&evenSort==true)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	

	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	