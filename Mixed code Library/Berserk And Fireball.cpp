#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a,b;
    int x,k,y;
    cin>>x>>k>>y;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    for(int j=0;j<m;j++)
    {
        int d;
        cin>>d;
        b.push_back(d);
    }
    if(n==m)
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
            
        }
        if(flag)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
            return 0;
        }
        
    }
    else
    {
        int p=0;
        int k=b[p];
        int l=b[p+1];
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
            
            if(a[i]==k)                                                                                                      

            {
                for(int j=i;j<a.size()-i;j++)
                {
                    if(a[j]=l)
                    {
                        cnt=j-i;
                        break;
                    }
                    
                }
                break;

            }

        }
    }
    
}