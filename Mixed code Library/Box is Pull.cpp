#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2)
        {
            cout<<abs(x1-x2)<<endl;
        }
        else
        {
            if(x1==x2)
            {
                cout<<abs(y1-y2)<<endl;
            }
            else
            {
                cout<<abs(y1-y2)+2+abs(x1-x2)<<endl;
            }
            
            
        }
        
    }
}