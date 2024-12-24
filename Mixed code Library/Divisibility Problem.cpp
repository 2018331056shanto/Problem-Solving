#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
         int c=a%b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }

       else if(a>b)
        {
            cout<<b-c<<endl;
        }
        else
            cout<<b-a<<endl;

    }
}
