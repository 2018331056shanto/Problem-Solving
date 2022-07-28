#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a,b;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=a[i+1])
            {
                b.push_back(a[i]);
                a.erase(i);
                

            }
        }
    }
}