#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>l;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                l.push_back(a[i]);
            }
        }
        sort(l.rbegin(),l.rend());
        
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                for(j;j<l.size();j++)
                {
                    cout<<l[j]<<" ";
                    j++;
                    break;
                }
              
              
            }
        }
        cout<<endl;
    }
}