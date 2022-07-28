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
        int a[100];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int dif=0;
        int ans=0;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                
                b.push_back(i);

            }
        }
        if((a[0]==1||a[n-1]==1)&&b.size()==1)
        {
            cout<<"0"<<endl;
        }
        else if(b.size()==1)
        {
           cout<<"0"<<endl;
        }
        else
        {
             for(int i=0;i<b.size()-1;i++)
        {
            if(b[i+1]-b[i]>1)
            {
                ans+=(b[i+1]-b[i])-1;
            }
        }
        cout<<ans<<endl;
        }
        
       
    }
}