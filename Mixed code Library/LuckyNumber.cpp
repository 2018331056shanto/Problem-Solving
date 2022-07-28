#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	std::vector<int> v;
	for(int i=1;i<=1429431;i+=2)
	{
		v.push_back(i);
	}	
	
	
	
	int x=3;
	int idx=1;
	int cc=1;
	while(v[cc]<=1429431)
	{
		// cout<<"hello bro "<<endl;
		// cout<<"cc "<<cc<<endl;
		int temp=v[cc];
		// cout<<"temp "<<temp<<endl;
		int ll=temp;
		// cout<<"temp "<<temp<<endl;
		// cout<<v[temp-1]<<endl;
		while(temp<=1429431)
		{
			
			// cout<<"temp while "<<temp<<endl;
			v[x-1]=0;
			x+=ll;
			temp+=ll;
			// cout<<"fuuu "<<endl;
			// cout<<temp<<endl;
		}
		// cout<<"motherfucker "<<endl;
		// cout<<v[cc]<<endl;
		sort(v.begin(),v.end());
		// for(int l:v)
		// 	cout<<l<<endl;
		int bound=upper_bound(v.begin(),v.end(),0)-v.begin();
		// cout<<"bound  "<<bound<<endl;
		x=bound;
		idx++;
		cc=x+idx;
		cout<<x<<endl;
		break;
		// cout<<"xxxx "<<x<<endl;
		// cout<<"ccccc  "<<cc<<endl;
		// cout<<"fuck you motherfucker "<<v[cc]<<endl;
		//cout<<"ccc  "<<cc<<endl;
		
		//cout<<"it's x "<<x<<endl;
		// cout<<"it s x  "<<x<<endl;
		// cout<<"v [x] "<<v[x]<<endl;
		// cout<<x<<endl;
		

	}
	// for(int l:v)
	// 	cout<<l<<endl;
	
}