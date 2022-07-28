#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	std::vector<int> v;
	// for(int i=1;i<=10000000;i+=2)
	// {
	// 	v.push_back(i);
	// }	
	for(int i=1;i<=10;i+=2)
	{
		v.push_back(0);
	}
	int idx=upper_bound(v.begin(),v.end(),0)-v.begin();
	cout<<idx<<endl;
	// int x=3;
	// int idx=2;
	// while(x<10000000)
	// {
		
	// 	int temp=x;
	// 	v[temp]=0;
	// 	while(temp<10000000)
	// 	{
	// 		temp*=2;
	// 		v[temp]=0;
	// 	}
	// 	sort(v.begin(),v.end());
	// 	upper_bound(v.begin(),v.end(),0);
	// 	cout
	// }
	
}