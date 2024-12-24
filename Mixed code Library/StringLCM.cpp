#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
     {
     	string a,b,p;
     	p="";
     	cin>>a>>b;
     	
     	if(a.size()>b.size())
     	{
     		swap(a,b);
     	}
     	int al=a.size();
     	int bl=b.size();
     	int d=(al*bl)/__gcd(al,bl);
     	for(int i=0;i<d/al;i++ )
     	{
     		p+=a;
     	}
     	int j=0;
     	bool f=true;
     	for(int i=0;i<p.size();i++)
     	{
     		if(p[i]!=b[j])
     		{
     			f=false;

     			break;
     		}
     		j++;
     		j%=bl;
     	}
     	if(f)
     	{
     		cout<<p<<endl;
     	}
     	else
        {
        	cout<<"-1"<<endl;
        }



	 }
}