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
        if(n%2)
        {
            vector<int>a;
            for(int i=0;i<n;i++)
            {
                int g;
                cin>>g;
                a.push_back(g);
            }
            a.push_back(100000);
            sort(a.begin(),a.end());
            if(a[0]!=0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    if(a[i+1]-a[i]>1)
                    {
                        cout<<a[i]+1<<endl;
                        break;
                    }
                }
            }
            
        }
        else
        {
            int e=0,f=0;
            vector<int>a,d;
            for(int i=0;i<n/2;i++)
            {
                int b;
                cin>>b;
                a.push_back(b);
            }
            sort(a.begin(),a.end());
            for(int i=0;i<n/2;i++)
            {
                int c;
                cin>>c;
                d.push_back(c);
            }
        
            sort(d.begin(),d.end());
            for(int i=0;i<n/2-1;i++)
            {
                if(a[0]!=0)
                {
                   e=0;
                }
                else
                {
                    if(a[i+1]-a[i]>1)
                    {
                        e=a[i]+1;
                        break;
                    }
                }
                
            }
            for(int i=0;i<n/2-1;i++)
            {
                if(d[0]!=0)
                {
                   f=0;
                }
                else
                {
                    if(d[i+1]-d[i]>1)
                    {
                        f=d[i]+1;
                        break;
                    }
                }
                
            }
            cout<<e+f<<endl;

        }
        
        
        
    }
}