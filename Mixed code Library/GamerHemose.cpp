#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		std::vector<int> v;
		int h;
		cin>>h;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
	    int l=v[n-1];
	    int k=v[n-2];
	    int tot=l+k;
	    if(h%tot==0)
	    {
	    	cout<<2*(h/tot)<<endl;
	    }
	    else
	    {

	         int kk=h%tot;
	         if(kk<=l&&(h/tot)==0)
	         	cout<<1<<endl;
	         else if(kk>l&&(h/tot)==0)
	         	cout<<2<<endl;
	         else if(kk<=l)
	         	cout<<2*(h/tot)+1<<endl;
	         else
	         	cout<<2*(h/tot)+2<<endl;
	    }

	}
}	