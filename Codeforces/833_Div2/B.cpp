

// // #include<bits/stdc++.h>
// // using namespace std;


// // void solve(){
	
// // 	int n;
// // 	cin>>n;
// // 	string s;
// // 	cin>>s;

// // 	long long ans=n;

// // 	vector<int>v;
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		int x=int(s[i]-'0');
// // 		v.push_back(x);
// // 	}


// // 	for(int i=0;i<n;i++)
// // 	{
// // 		set<int>ss;

// // 		int arr[11]={0,0,0,0,0,0,0,0,0,0,0};
		
// // 		ss.insert(v[i]);
// // 		arr[v[i]]++;
// // 		int mx=-10;
// // 		for(int j=i+1,k=1;j<n && k<110;j++,k++)
// // 		{
// // 			ss.insert(v[j]);
// // 			arr[v[j]]++;
// // 			mx=max(mx,arr[v[j]]);

// // 			if(ss.size()>=mx)
// // 			{
// // 				ans++;
// // 			}
// // 		}
// // 	}
// // 	cout<<ans<<endl;
	

// // }

// // int32_t main()
// // 	{
// // 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// // 		int t;
// // 		cin>>t;
// // 		while(t--)
// // 		{
// // 			solve();
// // 		}
// // 	}

// // Add some code
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	vector<string>ss;
// 	int cnt=1;
// 	bool flag=true;
// 	ss.push_back("{");
// 	while(true)
// 	{
// 		string a;
// 		cin>>a;
// 		if(a=="{"&&flag)
// 		{
// 			flag=false;
// 			continue;
// 		}
// 		else
// 		{
// 			if(a=="{")
// 			{
// 				cnt++;
// 				ss.push_back("{");
// 			}
// 			else if(a=="}")
// 			{
// 				cnt--;
// 				ss.push_back("}");
// 			}
// 			else
// 			{
// 				ss.push_back(a);
// 			}

// 		}
// 		if(cnt==0)
// 			break;
// 	}
// 	string b;
// 	cin>>b;
// 	string xx;
// 	for(auto x:ss)
// 		{
// 			xx+=x;
// 		}

// cout<<xx<<endl;
// if(xx==b)
// 	cout<<"same"<<endl;
// else
// 	cout<<"different"<<endl;
    
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;

	vector<int>ans;
	vector<int>aa,cc;

	if(a.size()>c.size())
	{
		for(int i=0;i<a.size()-c.size();i++)
		{
			// cout<<"dsha"<<endl;
			cc.push_back(0);
		}
	}
	else
	{
		for(int i=0;i<c.size()-a.size();i++)
		{
			aa.push_back(0);
		}

	}
	for(int i=0;i<a.size();i++)
	{
		int x=int(a[i]-'0');
		aa.push_back(x);
	}

	for(int i=0;i<c.size();i++)
	{
		int x=int(c[i]-'0');
		cc.push_back(x);
	}
	
	a.pop_back();
	// cout<<a.size()<<" "<<b<<" "<<c.size()<<endl;

	if(aa.size()>cc.size())
	{
		
		// cout<<"ahbladesadasdadas"<<endl;
		for(int i=aa.size()-1;i>=cc.size();i--)
		{
			ans.push_back(aa[i]);
		}

		int xx=0;
		// for(auto x:ans)
		// 	cout<<"hell "<<x<<endl;
		for(int i=cc.size()-1;i>=0;i--)
		{
			

			int sum=cc[i]+aa[i]+xx;
			if(sum>=10)
			{
				ans.push_back(sum%10);
				xx=1;
			}
			else
			{
				ans.push_back(sum);
				xx=0;
			}
			if(i==0&&xx==1)
			{
				ans.pop_back();
				ans.push_back(sum);
			}
		}
		
		for(int i=ans.size()-1;i>=0;i--)
		{
			cout<<ans[i];
		}
		cout<<endl;
	}

	else
	{
		// cout<<"helahda"<<endl;
		for(int i=cc.size()-1;i>=aa.size();i--)
		{
			ans.push_back(cc[i]);
		}

		int xx=0;
		// for(auto x:ans)
		// 	cout<<"hell "<<x<<endl;
		for(int i=aa.size()-1;i>=0;i--)
		{
			

			int sum=cc[i]+aa[i]+xx;
			if(sum>=10)
			{
				// cout<<"basha"<<endl;
				ans.push_back(sum%10);
				xx=1;
			}
			else
			{
				ans.push_back(sum);
				xx=0;
			}
			if(i==0&&xx==1)
			{
				ans.pop_back();
				ans.push_back(sum);
			}
		}
		for(int i=ans.size()-1;i>=0;i--)
		{
			cout<<ans[i];
		}
		cout<<endl;
	}
	

}