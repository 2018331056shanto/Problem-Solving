// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
		
// 		int n,k;
// 		cin>>n>>k;
// 		string s;
// 		cin>>s;
// 		std::vector<int> v(26);
// 		for(char x:s)
// 		{
// 			v[x-'a']++;
// 		}
// 		int pairs=0;
// 		int odd=0;
// 		for(int x:v)
// 		{
// 			pairs+=x/2;
// 			odd+=x%2;
// 		}
// 		int ans=2*(pairs/k);
// 		odd+=2*(pairs%k);
// 		if(odd>=k)
// 		{
// 			++ans;
// 		}
// 		cout<<ans<<endl;
		
// 	}	
	
// }


#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int id;
	  cout<<"Enter your ID : "<<endl;
	cin>>id;
    string name;
     cout<<"Enter your name : "<<endl;
    getline(cin, name);
    if(name.size()==0)
    {
    	getline(cin,name);
    }
     cout<<id<<" "<<name;
    
    return 0;
}