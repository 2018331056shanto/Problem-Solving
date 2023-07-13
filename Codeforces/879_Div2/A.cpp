#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	int neg=0;
	int pos=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x<0)
		{
			neg++;
		}
		else
		{
			pos++;
		}
		
	}

	if(pos>=neg)
	{
		if(neg%2)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	else{

		int negative=neg;
		int ans=INT_MAX;
		for(int i=1;i<=neg;i++)
		{
			negative--;
			pos++;
			// cout<<pow(negative,i)<<" "<<pos<<" "<<negative<<endl;
			if(pow(-1,negative)==1&&pos>=negative)
			{
				cout<<i<<endl;
				break;
			}
			
		}
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
