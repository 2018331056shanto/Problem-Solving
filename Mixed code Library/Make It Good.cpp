#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        long int s=n-1;
        while(s>0&&a[s]>=a[s-1])
        
            s--;
        
        while(s>0&&a[s]<=a[s-1])
        
            s--;
        
        cout<<s<<endl;

    }
}