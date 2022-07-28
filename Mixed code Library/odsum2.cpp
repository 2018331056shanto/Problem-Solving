#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[10000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        int flag=0;
        int even=0;
        int sum=0;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<x;k++)
       {



        sum+=a[k];
            if(a[k]%2!=0)
                {
                    flag=1;
                }
                else
                    even=1;

        }
       if(sum%2==1)
        cout<<"YES"<<endl;
       else if(flag&&even)
       {
           cout<<"YES"<<endl;


       }
       else
       cout<<"NO"<<endl;
    }
    return 0;
}



