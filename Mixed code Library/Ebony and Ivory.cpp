#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i*a+j*b==c)
            {
                flag=1;
               
            }
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

   
}