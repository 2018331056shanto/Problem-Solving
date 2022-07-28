#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int a,b,c,l,s,p;
        cin>>a>>b>>c;
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

        if(l>0)
        {


            flag+=1;
            l=l-1;
        }
        if(s>0)
        {
            flag+=1;
            s=s-1;
        }
        if(p>0)
        {
            flag+=1;
            p=p-1;
        }
        if(l>0&&p>0)
        {
            flag+=1;
            l=l-1;
            p=p-1;
        }
        if(s>0&&p>0)
        {
            flag+=1;
            s=s-1;
            p=p-1;
        }
        if(l>0&&s>0)
        {
            flag+=1;
            l=l-1;
            s=s-1;
        }
        if(l>0&&s>0&&p>0)
        {
            flag+=1;
        }
        cout<<flag<<endl;



    }
}
