#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,s;
	    cin>>x>>y>>s;
	    
	     
	     if(s*2>(x*y))
	     {
	         cout<<"YES"<<endl;
	     }
	     else
	     {
	         cout<<"NO"<<endl;
	     }
	}
	return 0;
}
