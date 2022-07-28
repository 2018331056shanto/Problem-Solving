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
        int a[n+10];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[0]+a[1]<=a[i])
            {
                cout<<"1"<<" "<<"2"<<" "<<i+1<<endl;
                flag=1;
                break;
            }
            
            
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }

    }
}