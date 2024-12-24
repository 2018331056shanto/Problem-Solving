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
 		std::vector<int>v;
 		for(int i=0;i<2*n;i++)
 		{
 			int x;
 			cin>>x;
 			v.push_back(x);
 		}
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" "<<v[i+n]<<" ";
        }
        cout<<endl;
 	}
 }	