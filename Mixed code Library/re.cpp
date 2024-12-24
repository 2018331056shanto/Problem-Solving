
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int palindrome(string s,int start,int end)
{
	//cout<<"star "<<start<<" "<<"end "<<end<<endl;

	if(start>end)
		return cnt;
	if(s[start]==s[end])
	{
		//cout<<cnt<<endl;
		palindrome(s,start+1,end-1);
		cnt++;
		
		//cout<<"cnt "<<cnt<<endl;
	}
	else
	{

		return cnt;
	}


	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	cin>>s;
	int x=palindrome(s,0,s.size()-1);
	if(x==ceil((double)s.size()/2))
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not palindrome"<<endl;
	}
	//cout<<x<<endl;
}	