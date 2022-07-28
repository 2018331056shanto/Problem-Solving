#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x;
    int a[10000];
    cin>>t;
    for(int i=0;i<t;i++)
    {

        cin>>x;
        int flag=0;
        for(int j=0;j<x;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<x;k++)
        {
            if(a[k]%2!=0)
            {
                flag++;
            }

        }
        //cout<<flag<<endl;
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else if(flag%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
