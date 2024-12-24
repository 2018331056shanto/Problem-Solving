#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c,s,l,p;
         if(a>b)
        {
            s=a;
            l=b;
        }
        else
        {


            s=b;
        l=a;
        }
        if(s>c)
        {
            p=s;
            if(l>c)
            {
                s=l;
                l=c;
            }
            else{
                    s=c;
                    }

        }
        else
            p=c;
            int d=p-l;
            p=p-l;
            int e=s-l;


    }
}
