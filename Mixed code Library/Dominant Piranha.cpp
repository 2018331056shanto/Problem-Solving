
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
        int mx=0;
        int simmilar=1;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            mx=max(mx,c);
            a.push_back(c);
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                simmilar++;
            }

        }
        //cout<<simmilar<<endl;
        if(simmilar==n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int flag=0;
             int idx=0;
             
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==mx&&(a[i+1]<mx))
            {
                idx=i+1;
                flag=1;
                break;

            }
        }
        if(!flag)
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]==mx&&(a[i-1]<mx))
                {
                    idx=i+1;
                    break;
                }
            }
        }
        cout<<idx<<endl;
        }
        
       

    }
}
