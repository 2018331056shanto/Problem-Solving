#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ev=0,od=0,e,o;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        if(c%2==0)
        {
            ev++;
            e=i;
            

        }
        else
        {
            od++;
            o=i;
        }
        
    }
    if(ev>od)
    {
        cout<<o<<endl;
    }
    else
    {
        cout<<e<<endl;
    }
    
    

}