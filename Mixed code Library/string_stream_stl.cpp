#include<bits/stdc++.h>
# include <sstream>
using namespace std;
int main()
{
	int num;
	vector<int>v;
	while(ss>>num)
		v.push_back(num);
	sort(v.begin(),v.end())
	cout<<v;
}