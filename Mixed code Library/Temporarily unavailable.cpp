#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int a,b,c,r,i=0,j=0,flag=0;;
        cin>>a>>b>>c>>r;
        if(b>a)
        {
            if(c+r<b&&c+r>a)
            {
                i=b-(c+r);
                flag=1;

            }
           
            
            if(c-r>a&&c-r<b)
            {
                j=c-r-a;
                flag=1;
            }
            if(flag==1)
            {
                cout<<i+j<<endl;
            }
            else
            {
                if(c-r<=a&&c+r>=b)
                {
                    cout<<"0"<<endl;
                }
                else
                {
                    cout<<abs(b-a)<<endl;
                }
                
            }
            


            

        }
        else
        {
           swap(a,b);

            if(c+r<b&&c+r>a)
            {
                i=b-(c+r);
                flag=1;

            }
           
            
            if(c-r>a&&c-r<b)
            {
                j=c-r-a;
                flag=1;
            }


             if(flag)
             {
                 cout<<i+j<<endl;
             }
             else
             {
                 if(c-r<=a&&c+r>=b)
                 {
                     cout<<"0"<<endl;
                 }
                 else
                 {
                      cout<<abs(b-a)<<endl;
                 }
                 
                

             }
             
        }
        
       
    }
}