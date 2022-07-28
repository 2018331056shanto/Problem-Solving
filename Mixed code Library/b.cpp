#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        double dh,dl,dr,k,d;
        cin>>dh>>dl>>dr>>k;
        if(dh==0&&dl==0&&dr==0&&k==0)
        break;
        else
        {
            d=sqrt(dr*dr+dh*dh);
            cout<<d+dl<<endl;
        }
        
    }
}