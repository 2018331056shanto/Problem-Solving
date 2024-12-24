#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a;
        long int n;
        cin>>n;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                continue;
            }
            else
            {
                flag=1;
                ans++;
            }
            

        }
        if(flag==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        


    }
}