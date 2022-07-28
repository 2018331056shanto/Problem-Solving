#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int t=n;
       if(t%6==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"9";
               j=j+6;
           }
       }
        else if(t%2==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"1";
               j=j+2;
           }
       }
       else  if(t%3==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"7";
               j=j+3;
           }
       }
        else if(t%5==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"5";
               j=j+5;
           }
       }
        else if(t%4==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"4";
               j=j+4;
           }
       }
        else if(t%7==0)
       {
int j;

           for( j=0;j<=t;j++)
           {
               cout<<"8";
               j=j+7;
           }
       }
       else return 0;
    }
}
