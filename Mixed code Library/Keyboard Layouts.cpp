#include<bits/stdc++.h>
using namespace std;
int main()
{//uppercase 65 lowercase97 diiference 32 digits 48-57
    string a,b,c;
    vector<char>d;
   // char d[10000];
    cin>>a>>b>>c;
    int flag=0;
    char e,f;
    for(int i=0;i<c.size();i++)
    {
        
       if(c[i]<97&&c[i]>=65)
       {
           e=c[i]+32;     
           flag=1;
       }
       
       
      else  if(c[i]>=48&&c[i]<=57)
       {
           d.push_back(c[i]);
       }
       else
       {
           f=c[i];
       }
      cout<<e<<" "<<f<<endl;
       int idx=0;
       //cout<<e<<" ";
       for(int i=0;i<a.size();i++)
       {
           if(flag)
           {
               if(a[i]==e)
           {
              cout<<a[i]<<" "<<b[i]<<endl;

               idx=i;
              // cout<<i<<" ";
           }
           }
           else
           {
               if(a[i]==f)
               {
                   cout<<a[i]<<" "<<b[i]<<endl;
                   idx=i;
                  // cout<<i<<" ";
               }

           }
           
           
          
       }
       if(flag)
       {
           //cout<<b[idx]<<" ";
           d.push_back(b[idx]-32);
           flag=0;
       
       }
       else
       {
           //cout<<b[idx]<<" ";
           d.push_back(b[idx]);
       }
       
       
    }

   for(int i=0;i<c.size()+1;i++)
       {
           cout<<d[i];
       }
       cout<<endl;
 //      cout<<c.size();
   //    cout<<d.size();
   
   
}