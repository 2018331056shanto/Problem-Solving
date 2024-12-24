#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		 int n;
		 cin>>n;
		 int cnt0=0;
		 for(int i=0;i<n;i++)
		 {
		 	char x;
		 	cin>>x;
		 	if(x=='0')
		 	{
		 		cnt0++;
		 	}
		 }
		 if(cnt0%2==0||cnt0==1)
		 {
		 	cout<<"BOB"<<endl;

		 }
		 else
		 {
		 	cout<<"ALICE"<<endl;
		 }
	}
}	