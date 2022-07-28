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
		bool flag=false;
	   for(int i=0;i<n;i++)
	   {
	   	int pro;
	   	cin>>pro;
	   	
	   	  double x=(double)sqrt(pro);
	   int l=(int)x;
	  
	   if(l!=x)
	   {
	   	 flag=true;
	   	
	   }
	   
	   }
	   if(flag)
	   {
	   	cout<<"YES"<<endl;
	   }
	   else
	   {
	   	cout<<"NO"<<endl;
	   }
	   

	}
}	