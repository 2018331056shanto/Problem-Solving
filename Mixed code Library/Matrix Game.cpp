#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    
    {
        set<int>r,c;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                if(x)
                {
                    r.insert(i);
                    c.insert(j);
                }

            }
        }
        int mn=min(n-r.size(),m-c.size());
        if(mn%2)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Vivek"<<endl;
        }
        

    }
}