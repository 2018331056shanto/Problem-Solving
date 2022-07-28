#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //int flag1=1,flag2=1;
    cin>>t;
    while(t--)
    {
        int n;
        int flag1=0,flag2=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           // int flag1=1,flag2=1;
            int a;
            cin>>a;

            if(a%2==0)
            {
               // flag1=1;
               // cout<<flag1<<endl;
                flag1=1;
            }
            else {
                //flag2=1;
                //cout<<flag2<<endl;
                flag2=1;
            }





        }
 if(flag1 && flag2)
                cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;

    }
}
