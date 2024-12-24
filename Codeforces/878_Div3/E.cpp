#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	string a,b;
	cin>>a>>b;
	int t,q;
	cin>>t>>q;
	// queue<pair<pair<pair<char,char>,int>,int>>v;
	vector<int>v(n,0);
	int cnt=1;
	for(int i=0;i<q;i++)
	{
		int which;
		cin>>which;
		if(which==1)
		{
			int idx;
			cin>>idx;
			
			// v.push({{{a[idx-1],b[idx-1]},idx},cnt});
			a[idx-1]='#';
			b[idx-1]='#';

		}
		else if(which==2)
		{
			int x,y,x1,y1;
			cin>>x>>y>>x1>>y1;
			char s1,s2;
			if(x==1&&x1==1)
			{
				swap(a[y-1],a[y1-1]);
			}
			else if(x==1&&x1==2)
			{
				swap(a[y-1],b[y1-1]);
			}
			else if(x==2&&x1==1)
			{
				swap(b[y-1],a[y1-1]);
			}
			else
			{
				swap(b[y-1],b[y1-1]);
			}
			

		}
		else
		{
			if(!v.empty())
			{
				auto front=v.front();

				int cntc=front.second;
				int idx1=front.first.second;
				int char1=front.first.first.first;
				int char2=front.first.first.second;
				// cout<<cnt<<" "<<cntc<<" "<<idx1<<" "<<char(char1)<<" "<<char(char2)<<endl;
				// cout<<"dif time :"<<cnt-cntc<<" "<<cnt<<" "<<cntc<< endl;
				if(cnt-cntc+1>t)
				{
					a[idx1-1]=char1;
					b[idx1-1]=char2;
					v.pop();
				}
				

			}

			if(a==b)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}

		
		cnt++;
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
