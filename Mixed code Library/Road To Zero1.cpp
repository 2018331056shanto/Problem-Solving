#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int x,y,a,b;
        cin>>x>>y>>a>>b;
        if((x==0&&y==0)||(x==1&&y==0))
        {
            cout<<"0"<<endl;
        }
        else if(x==y)
        {
            cout<<b*x<<endl;
        }
        else
        {
            
        
        
       long long  int ca=0,cb=0;
        
        while(1)
        {
 
        
           if(x>y)
 
          {
            if(a>b)
            {
              x--;
              cb++;
             
            }
             else
            {
              x--;
              ca++;
                
            }
          
          }
           else
          {
              if(a>b)
            {
              y--;
              cb++;
             
           
            }
            else
            {
              y--;
              ca++;
              
            }
            
          }
          if(x==y)
          break;
        }
        while(1)
        {
 
        
        if(x==y)
        {
            x--;
            y--;
            cb++;
            if(x==0&&y==0)
            break;    
           }
         }
        
 
        
        cout<<b*cb+a*ca<<endl;
    }
 }
}
 
