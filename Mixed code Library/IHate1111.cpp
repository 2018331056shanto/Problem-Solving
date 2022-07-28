#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
string s="11";
void init()
{
	for(int i=0;i<8;i++)
	{
		int x=stoi(s);
		v.push_back(x);
		s=s+"1";
		//cout<<x<<endl;
	}
     //cout<<v.size()<<endl;
}
int main()
{
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	init();
	//cout<<v.size()<<endl;

	

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		//cout<<cnt<<endl;
		bool falg=false;
	    for(int i=0;i<20;i++)
	    {
	    	if(n%11==0)
	    	{
	    		falg=true;
	    		cout<<"YES"<<endl;
	    		break;
	    	}
	    	else
	    	{
	    		
	    		n=n-111;
	    		if(n<0)
	    			break;
	    		//cout<<n<<endl;

	    	}
	    }
	    if(!falg)
	    {
	    	cout<<"NO"<<endl;
	    }
	}
}	