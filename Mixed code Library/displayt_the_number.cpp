#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        //int display;
        cin>>n;
        while(n>0)
        {
            if(n==2)

       {

         //display=1;

         sum=sum+2;
         n=n-2;

        }
        if(n==4)
        {
           // display=4;
            sum=sum+4;
            n=n-4;
        }
        if(n==5)
        {
            //display=5;
            sum=sum+5;
            n=n-5;
        }
        if(n==3)
        {
            //display=7;
            sum=sum+7;
            n=n-3;
        }
        if(n==7)
        {
            //display=8;
            sum=sum+8;
            n=n-7;
        }
        if(n==6)
        {
            //display=9;
            sum=sum+9;
            n=n-6;
        }


    }
    cout<<sum<<endl;
    }


    return 0;
}
