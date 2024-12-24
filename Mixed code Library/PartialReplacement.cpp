#include<bits/stdc++.h>
using namespace std;	
int a[100];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		memset(a,0,sizeof(a));
	    std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			char c;
			cin>>c;
			if(c=='*')
			{
				a[i]++;
			}
		}
		int cnt=0;
		for(int i=0;i<n;i++)
		{

			if(a[i]==1)
			{
				v.push_back(i);
			   	//cout<<"i :"<<i<<endl;
				cnt++;
				//cout<<"cnt :"<<cnt<<endl;
				int l=i;
		    	//cout<<"l :"<<l<<endl;
			for(int j=l+k;j>l;j--)
			{
				//cout<<"j "<<j<<endl;
				//cout<<l+k<<endl;
				//cout<<"a[j] "<<a[j]<<endl; 
				if(a[j]==1)
				{
					i=j;
					cnt++;
					v.push_back(j);
					//cout<<"cnt1 "<<cnt<<endl;
					break;
				}
			}
			}

		}
		int cnt1=0;
		if(v.size()>=3)
		{
			for(int i=0;i<v.size()-2;i++)
		{
			if(v[i+2]-v[i]<=k)
			{
				cnt1++;

			}
			//cout<<v[i]<<" ";
		}
		}
		
		//cout<<endl;
		//cout<<cnt1<<endl;
		cout<<cnt-cnt1<<endl;
	}
}	