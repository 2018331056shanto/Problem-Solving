#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a.emplace_back(b);
        }
        sort(a.begin(),a.end());
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;

            }
        }
        if(cnt+1==n)
        {
            cout<<n<<endl;

        }
        else
        {
            cout<<"1"<<endl;
        }
        
    }
}