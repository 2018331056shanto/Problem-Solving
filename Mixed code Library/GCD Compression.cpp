 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int n,cnt=0,o=0,e=0;
        vector<int>od,ev;
         cin>>n;
         for(int i=1;i<=2*n;i++)
         {
             int c;
             cin>>c;
             if(c%2)
             {
                 od.push_back(i);
                 o++;
             }
             else
             {
                 ev.push_back(i);
                 e++;
             }
            

         }
         if(o>=1)
         {
              for(int i=0;i<n-1;i+=2)
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
          for(int i=0;i<n-1;i+=2)
          {
              if(cnt==n-1)
              {
                  break;
              }
              cout<<ev[i]<<" "<<ev[i+1]<<endl;
              cnt++;
          }
      }
      
      
        
        
     }
 }