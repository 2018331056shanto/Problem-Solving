#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    vector<char>e;
    cin>>a>>b>>c;
    map<char,char>d;
    for(int i=0;i<a.size();i++)
    {
        d.insert(make_pair(a[i],b[i]));
    }
     map<char,char> :: iterator it;
    for(int i=0;i<c.size();i++)
    {
       if(c[i]>=48&&c[i]<=57)
       {
           e.push_back(c[i]);
       } 
       else
       {
           char g;
           int flag=0;
           if(c[i]<97)
           {
               g=tolower(c[i]);
               flag=1;

           }
           else
           {
               g=c[i];
           }
           
           for(it=d.begin();it!=d.end();it++)
            {
                if(it->first==g)
                {
                    if(flag)
                    {
                        e.push_back(toupper(it->second));
                    }
                    else
                    {
                        e.push_back(it->second);
                    }
                    
                    
                }
        
            }
           
       }
       
    
    }
    for(int i=0;i<c.size();i++)
    {
        cout<<e[i];
    }
    cout<<endl;
   
}