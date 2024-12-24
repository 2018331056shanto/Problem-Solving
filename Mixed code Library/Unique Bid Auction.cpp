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
            b.push_back(c);
        }
        sort(b.begin(),b.end());
        int val=1000000;
        bool found=false;
        for(int i=1;i<n-1;i++)
        {
            if(b[i]!=b[i+1]&&b[i]!=b[i-1])
            {
                val=b[i];
                found=true;
                break;
            }
            
        }
        if(b[0]!=b[1])
        {
            val=b[0];
            found=true;
        }
        if(b[n-1]!=b[n-2])
        {
            val=min(val,b[n-1]);
            found=true;
        }
        //cout<<val<<endl;
        if(found)
        {
            for(int i=0;i<n;i++)
          {
            if(a[i]==val)
            {
                cout<<i+1<<endl;
                break;
            }
          }
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}