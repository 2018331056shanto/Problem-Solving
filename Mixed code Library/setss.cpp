#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	set<int>s,s1;
    for(int i=0;i<10;i++)
    {
    	int x;
    	cin>>x;
    	s.insert(x);
    }

    for(int i=0;i<10;i++)
    {
    	int x;
    	cin>>x;
    	s1.insert(x);
    }
    
    for(auto x:s)
    {
    	cout<<x<<" ";
    }
   	 	cout<<endl;
     for(auto x:s1)
    {
    	cout<<x<<" ";
    }
    cout<<endl;

    if(s==s1)
    ]{
    	cout<<"Same set"<<endl;
    }
}	