// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main() {
//     int x;
//     cin >> x;
//     while (x--) {
//         vector<string> s(2);
//         cin >> s[0] >> s[1];
//         int n = s[0].size();
//         int bad = 0;
//         for (int i = 0; i < n; ++i) {
//             if (s[0][i] != s[1][i]) {
//                 ++bad;
//             }
//         }
//         int t, q;
//         cin >> t >> q;
//         queue<pair<int, int>> unblock;
//         for (int i = 0; i < q; ++i) {
//             while (!unblock.empty() && unblock.front().first == i) {
//                 if (s[0][unblock.front().second] != s[1][unblock.front().second]) {
//                     ++bad;
//                 }
//                 unblock.pop();
//             }
//             int type;
//             cin >> type;
//             if (type == 1) {
//                 int pos;
//                 cin >> pos;
//                 if (s[0][pos - 1] != s[1][pos - 1]) {
//                     --bad;
//                 }
//                 unblock.emplace(i + t, pos - 1);
//             } else if (type == 2) {
//                 int num1, pos1, num2, pos2;
//                 cin >> num1 >> pos1 >> num2 >> pos2;
//                 --num1; --pos1; --num2; --pos2;
//                 if (s[num1][pos1] != s[1 ^ num1][pos1]) {
//                     --bad;
//                 }
//                 if (s[num2][pos2] != s[1 ^ num2][pos2]) {
//                     --bad;
//                 }
//                 swap(s[num1][pos1], s[num2][pos2]);
//                 if (s[num1][pos1] != s[1 ^ num1][pos1]) {
//                     ++bad;
//                 }
//                 if (s[num2][pos2] != s[1 ^ num2][pos2]) {
//                     ++bad;
//                 }
//             } else {
//                 cout << (!bad ? "YES" : "NO") << "\n";
//             }
//         }
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	vector<string>s(2);
	cin>>s[0]>>s[1];

	int bad=0;
	int n=s[0].length();
	for(int i=0;i<n;i++)
	{
		if(s[0][i]!=s[1][i])
		{
			bad++;
		}
	}

	queue<pair<int,int>>q;
	int  t,qq;
	cin>>t>>qq;
	for(int i=0;i<qq;i++)
	{
		while(!q.empty()&&q.front().first==i)
		{
			if(s[0][q.front().second]!=s[1][q.front().second])
			{
				bad++;
			}

			q.pop();
		}

		int type;
		cin>>type;

		if(type==1)
		{
			int pos;
			cin>>pos;
			if(s[0][pos-1]!=s[1][pos-1])
			{
				bad--;
			}
			q.push({i+t,pos-1});
		}
		else if(type==2)
		{
			int num1,num2,pos1,pos2;
			cin>>num1>>pos1>>num2>>pos2;
			--num1,--pos1,--num2,--pos2;

			if(s[num1][pos1]!=s[1^num1][pos1])
			{
				--bad;
			}

			if(s[num2][pos2]!=s[1^num2][pos2])
			{
				--bad;
			}

			swap(s[num1][pos1],s[num2][pos2]);

			if(s[num1][pos1]!=s[1^num1][pos1])
			{
				bad++;
			}

			if(s[num2][pos2]!=s[1^num2][pos2])
			{
				bad++;
			}



		}
		else
		{
			cout<<(!bad?"Yes":"No")<<endl;
		}
	}
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
