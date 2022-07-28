#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int i)
{
	if(n%i==0)
	{
		return i;
	}
	gcd(i,n%i);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	int cnt=0;
	std::vector<int> v;
	long long int p=1;
	for(int i=1;i<n;i++)
	{
		if(gcd(n,i)==1)
		{
			cnt++;
			v.push_back(i);
			p=(p*i)%n;
		}
	}
	if(p==1)
	{
		cout<<cnt<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	}
	else
	{
		cout<<cnt-1<<endl;
	for(int i=0;i<v.size()-1;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	}
	
}	