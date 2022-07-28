#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,a,b,t,f,g,h;
    int e[10];
    cin>>t;
    for(int i=0;i<t;i++)
    {

        cin>>n>>x>>a>>b;
        if(a==b)
        {

            return 0;
        }

        e[0]=a;
        e[1]=b;
        if(e[0]>e[1])
        swap(e[0],e[1]);
        if(e[0]-x>=1)
        {


            f=abs(e[1]-(e[0]-x));
            cout<<f<<endl;


        }
        else if(e[1]+x<=n)
        {
            g=((e[1]+x)-e[0]);
            cout<<g<<endl;
        }

        else
            {
                h=(e[1]-e[0]);
        cout<<h<<endl;
            }




    }
    return 0;
}
