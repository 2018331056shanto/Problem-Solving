#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        int c=sqrt(a);
        if(a%2==0&&b%2==0&&b<=c)
        {
            cout<<"YES"<<endl;
        }
        else if(a%2==1&&b%2==1&&b<=c)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
