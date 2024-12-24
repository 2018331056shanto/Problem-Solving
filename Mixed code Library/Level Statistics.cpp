#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p[10000],c[10000],flag=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>p[i]>>c[i];
        
        }
        for(int j=1;j<n;j++)
        {
          
          if(p[j-1]<0||c[j-1]<0)
          break;
          if(p[j]>=p[j-1]&&c[j]>=c[j-1])
          {
              if(c[j]-c[j-1]>=0&&p[j]-p[j-1]>=0)
              {
              flag++;
              }
          }
         
          
               
            
            
        }
        if(flag==(n-1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
}