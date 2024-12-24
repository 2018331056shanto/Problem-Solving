#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,ev=0,od=0;
        cin>>n>>x;
        int d=n-x;
      //  cout<<d<<endl;

        while(n--)
        {
            int c;
            cin>>c;
            if(c%2==0)
            {
                ev++;
            }
            else
            {
                od++;
            }
            
        }
       
      
        
        if(ev==0&&x%2==0)
        {
            cout<<"NO"<<endl;
        }
         else if(od%2==0&&(x-od)>0&&(d)<1)
        {
            cout<<"NO"<<endl;
          
           
       
        }
        else if(od==0)
        {
            cout<<"NO"<<endl;
        }
       
        else 
        {
            cout<<"YES"<<endl;
        }
        


    }
}