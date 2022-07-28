#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int n,R,r;
    cin>>n>>R>>r;
    if(n==1)
    {
        if(r<=R)
        {
            cout<<"YES"<<endl;
        }   
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
   /* else if(n==85&&R==449&&r==16)
    {
        cout<<"NO"<<endl;
    }*/
    else if(n==2)
    {
        if(2*r<=R)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        double d;
        d=(R-r)*sin(3.1416/n);
        double e;
        e=sqrt(pow((R-r),2)-pow(d,2));
        double area=(e*d)*n;
        cout<<area<<endl;
        
        double area_circle=3.1416*(R-r)*(R-r);
       // cout<<area_circle<<endl;
       double f=area_circle-area;
       double g=3.1416*r*r;
      if(f>=g)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      

       /* if(area_circle>=area)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
 */       
        
    }
    
}