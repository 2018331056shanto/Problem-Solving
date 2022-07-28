#include<bits/stdc++.h>
using namespace std;
vector<int>total;
void psum(vector<int>&a)
{   long long int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
    }
    total.push_back(sum);
    int mx=*max_element(a.begin(),a.end());
    int mn=*min_element(a.begin(),a.end());
    if(mx==mn)
    {
        return ;
    }
    int avg=(mn+mx)/2;
    vector<int>lthan,gthan;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=avg)
        {
            lthan.push_back(a[i]);
        }
        else
        {
            gthan.push_back(a[i]);
        }
        
    }
    psum(lthan);
    psum(gthan);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a,c;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        for(int i=0;i<q;i++)
        {
            int d;
            cin>>d;
            c.push_back(d);
        }
        psum(a);
        bool h=false;
        for(int i=0;i<c.size();i++)
        {
            for(int j=0;j<total.size();j++)
            {
                if(c[i]==total[j])
                {
                    h=true;
                    
                    break;
                }
               
                
            }
            if(h==true)
            {
                cout<<"Yes"<<endl;
                h=false;
            }
            else
            {
                cout<<"No"<<endl;
                h=false;
            }
            
        }
        total.clear();
    }
}