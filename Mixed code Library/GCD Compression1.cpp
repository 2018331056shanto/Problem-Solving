#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,cnt=0;
      cin>>n;
      vector<int>od,ev;
      for(int i=1;i<=2*n;i++)
      {
          int c;
          cin>>c;
          if(c%2)
         {
             od.push_back(i);
         }
         if(c%2==0)
         {
             ev.push_back(i);
         }
      }
     
     
         if(od.size()!=0)
         {
             for(int i=0;i<od.size()-1;i+=2)
             {
                 if(cnt==n-1)
                 {
                     break;
                 }
                 
                 cout<<od[i]<<" "<<od[i+1]<<endl;
                 cnt++;
             }
         }
         if(cnt<n-1)
         {

        
         if(ev.size()!=0)
         {
             for(int i=0;i<ev.size()-1;i+=2)
             { 
                 if(cnt==n-1)
                 break;
                 cout<<ev[i]<<" "<<ev[i+1]<<endl;
                 cnt++;
             }
         }

         }

      
   
    }
}