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
		string s;
		cin>>s;
		int bmid=0;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='*')
				v.push_back(i);

		}
		int mid=n/2-1;
		int idx=0;
		int id=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]<=mid)
			{
				//cout<<"x"<<endl;
				bmid++;
				idx=v[i];
				id=i;
			}
		}
		//cout<<idx<<" "<<id<<endl;
		if(v.size()==1)
			cout<<0<<endl;
		else
		{
			int amid=v.size()-bmid;
		long long int sum=0;
		if(bmid>=amid)
		{
			//cout<<"l"<<endl;
			int cnt=1;
			for(int i=id-1;i>=0;i--)
			{
				sum+=(idx-cnt-v[i]);
				cnt++;

			}
		   cnt=1;
		   for(int i=id+1;i<v.size();i++)
		   {
		   	sum+=(v[i]-(idx+cnt));
		   	cnt++;
		   }
		}
		else
		{
			int cnt=1;
			for(int i=id;i>=0;i--)
			{
				sum+=abs((v[id+1]-cnt-v[i]));
				cnt++;

			}
		   cnt=1;
		   for(int i=id+2;i<v.size()&&id+2<=v[v.size()-1];i++)
		   {
		   	sum+=(v[i]-(v[id+1]+cnt));
		   	cnt++;
		   }
		}
		cout<<sum<<endl;
		}
		

	}
}	