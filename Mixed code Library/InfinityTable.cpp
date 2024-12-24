#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
void init()
{
	v.push_back(1);
		v.push_back(2);
		int k=3;
		for(int i=1;i<100000000;i++)
		{
			v.push_back(v[i]+k);
			k+=2;
			if(v[i]>1000000000)
				break;
		}
		
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	init();
	while(t--)
	{
		
		int n;
		cin>>n;
		int idx;
		bool flag=false;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]==n)
			{
				flag=true;
				idx=i;
				break;

			}
			else if(v[i]<n)
			{

				idx=i;
			}
			
		}
		//cout<<v[idx]<<endl;
		//cout<<idx<<endl;
		//cout<<v[idx]+idx<<endl;
		if(flag)
		{
			cout<<1<<" "<<idx+1<<endl;
		}
		else if(v[idx]+idx<n)
		{
			cout<<idx+1<<" "<<idx+1-(n-(v[idx]+idx))<<endl;
		}
		else
		{
			cout<<n-v[idx]+1<<" "<<idx+1<<endl;
		}
		
		
	}
}	