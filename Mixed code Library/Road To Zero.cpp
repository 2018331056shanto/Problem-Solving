#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int x,y,a,b,ca=0,cb=0;
        cin>>x>>y>>a>>b;
        if((x==0&&y==0)||(x==1&&y==0))
        {
            cout<<"0"<<endl;
        }
        
       else
       {
           long long int d,e,f;
           if(x>y)
           {
               if(a>b)
               {
                   cb=y;
                   
                   ca=(x-y);
                   
                   
               }
               else
               {
                   ca=x-y;
                   e=x+y;

                   cb=y; 
                 }
           }
           else
           {
               if(a>b)
               {
                   cb=x;
                   ca=y-x;
                   
               }
               else
               {
                   ca=y-x;
                   d=x+y;
                   cb=x;
                   
               }
               
           }
           f=ca*a+cb*b;
           if(d*a<f)
           {
               cout<<d*a<<endl;
           }
           else if(e*a<b)
           {
               cout<<e*a<<endl;
           }
           else
           {
               cout<<f<<endl;
           }
           
          
        
       }
   
 }
}

