#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,n,p,c,d,flag=0;
        cin>>x>>y>>k>>n;
        d=x-y;
        for(int i=0;i<n;i++)
        {
            cin>>p>>c;
            if(p>=d&&c<=k)
            {
                flag=1;
                 
            }
           

        }
        if(flag==1)
        {
            cout<<"LuckyChef"<<endl;
        }
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
        
    }
}