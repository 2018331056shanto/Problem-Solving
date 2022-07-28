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
		std::vector<int>neg,pos;
		int cnt=0;
		int pmn=1e9;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x<=0)
			{
				neg.push_back(x);
			}
			
			else
			{
				pmn=min(pmn,x);
				pos.push_back(x);
			}
		}

		if(neg.size()==n)
		{
			cout<<n<<endl;
		}
		else if(pos.size()==n)
		{
			cout<<1<<endl;
		}
		else
		{
			sort(neg.begin(),neg.end());
			//sort(pos.begin(),pos.end());
			//int k=abs(neg[neg.size()-1]-neg[neg.size()-2]);
			//cout<<neg[neg.size()-1]<<" "<<neg[neg.size()-2]<<endl;
			//cout<<k<<endl;

			int k=1e9;
			for(int i=0;i<neg.size()-1;i++)
			{
				k=min(k,abs(neg[i+1]-neg[i]));
			}
			//cout<<k<<endl;
			if(k>=pmn)
			{
				cout<<neg.size()+1<<endl;
			}
			else
			{
				cout<<neg.size()<<endl;
			}
			

		}
	}
}	
/*
4
5
4
1
3
4
*/