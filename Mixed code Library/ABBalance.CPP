// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		string s;
// // 		cin>>s;
// // 		int ab=0;
// // 		int ba=0;
		
// // 		for(int i=0;i<s.size()-1;i++)
// // 		{
// // 			if(s[i]=='a'&&s[i+1]=='b')
// // 			{
// // 				ab++;
				
// // 			}
// // 			else if(s[i]=='b'&&s[i+1]=='a')
// // 			{
				
// // 				ba++;
// // 			}

// // 		}
// // 		int n=s.size();
// // 		if(ab!=ba)
// // 		{
// // 			if(s[n-1]=='b')
// // 			{
// // 				s[n-1]='a';
// // 			}
// // 			else
// // 			{
// // 				s[n-1]='b';
// // 			}
// // 		}
// // 		cout<<s<<endl;
// // 	}
// //}	
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		long long  n,k;
// 		cin>>n>>k;
// 		if(n==1)
// 			cout<<0<<endl;
// 		else if(k==1)
// 			cout<<n-1<<endl;
// 		else
// 		{
// 			long long p=1;
// 			int cnt=0;
// 			for(int i=1;i<n;i++)
// 			{
// 				if(p>k)
// 				{
// 					break;
// 				}
// 				p+=p;
// 				cnt++;
// 			}
// 			//cout<<cnt<<endl;
// 			//cout<<"p"<<p<<endl;
// 			long long  x=n-p;
// 			//cout<<x<<endl;

// 			long long  ans=cnt+ceil((long double)x/(long double)k);
// 			cout<<ans<<endl;
// 		}
// 	}
// }	
// // #include<bits/stdc++.h>
// // using namespace std;

// // using ll = long long;
// // int32_t main() {
// //   ios_base::sync_with_stdio(0);
// //   cin.tie(0);
// //   int t; cin >> t;
// //   while (t--) {
// //     ll n, k; cin >> n >> k;
// //     if (k == 1) {
// //       cout << n - 1 << '\n';
// //       continue;
// //     }
// //     ll ans = 0, x = 1;
// //     while (x < k) {
// //       ++ans;
// //       x += x;
// //     }
// //     if (x < n) {
// //       ans += (n - x + k - 1) / k;
// //     }
// //     cout << ans << '\n';
// //   }
// //   return 0;
// // }
