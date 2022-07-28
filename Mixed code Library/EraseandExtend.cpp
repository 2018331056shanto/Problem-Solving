#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	string s,ans;
	string temps="";
	cin>>s;
	// int idx=0;
	// std::vector<int> v;
	// for(int i=n-1;i>=1;i--)
	// {
	// 	if(s[i]>s[0])
	// 	{
	// 		idx=i;
	// 	}
	// 	if(s[i]==s[0])
	// 	{
	// 		v.push_back(i);
	// 	}
	// }	
	// // cout<<idx<<endl;
	// if(idx==0)
	// {
	// 	temps=s;
	// }
	// else
	// {
	// 	temps=s.substr(0,idx);
	// }
	// // cout<<temps<<endl;


	// int repeate=(k+temps.size()-1)/temps.size();
	// for(int i=0;i<repeate;i++)
	// {
	// 	ans.append(temps);
	// }	
	// string ans1=ans.substr(0,k);
	// cout<<ans1<<endl;
	// // cout<<repeate<<endl;
	string x;
	x.append(1,s[0]);
	string y;
	// cout<<x<<endl;
	for(int i=1;i<n;i++)
	{
		y=x+s[0];
		x=x+s[i];
		// cout<<"its y  "<<y<<endl;
		
		  // cout<<x<<" "<<y<<endl;
		if(x>y)
		{
			temps=y;
			cout<<"naughty "<<endl;
			 temps.pop_back();
			break;
		}
		
		else
		{
			// cout<<x<<endl;
			temps=x;
			// cout<<"fuck off"<<endl;
			continue;
		}
	}
	// cout<<"fuck you"<<endl;
	// cout<<temps<<endl;
	int repeate=(k+temps.size()-1)/temps.size();
	for(int i=0;i<repeate;i++)
	{
		ans.append(temps);
	}	
	string ans1=ans.substr(0,k);
	cout<<ans1<<endl;
	// cout<<repeate<<endl;

}