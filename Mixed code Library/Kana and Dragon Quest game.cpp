#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,n,m,l;

        cin>>h>>n>>m;
        l=h;
        for(int i=0;i<n;i++)
        {
            if(l==10||l-10<10)

)
            break;
           h=(h/2)+10;
           l=h;
           
          
        }
    
        
        
        if(h<=0)
        {
            cout<<"YES"<<endl;

        }
        else
        {
           for(int j=0;j<m;j++)
           {
               h=h-10;
           }
           
           if(h<=0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
           
        }
        
    }
}