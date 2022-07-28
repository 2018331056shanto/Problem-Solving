#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],b[10];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    int alice=0,bob=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
       if(b[i]>a[i])
       {
           bob++;
       }
        
    }
    cout<<alice<<" "<<bob<<endl;

}