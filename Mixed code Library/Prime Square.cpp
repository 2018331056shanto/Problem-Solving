#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>p;
   for(int i=2;i<5000;i++)
{
    int c=0;
    for(int j=1;j<=i;j++)
    {
        
        if(i%j==0)
        {
            c++;

        }
    }
    if(c==2)
    {
        p.push_back(i);
    }
}
sort(p.begin(),p.end(),greater<>());
for(int i=0;i<10;i++)
{
    cout<<p[i]<<" ";
}
cout<<endl;

  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num=0;
        for(int i=0;i<p.size();i++)
        {
           int f=p[i]-(n-1)*4;
           bool yes=binary_search(p.begin(),p.end(),f);
           if(!yes)
           {
               num=f;
           }
           else
           {
               continue;
           }
           
        }
        cout<<num<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                if(i==j)
                {
                    cout<<num<<" "; 
                }
                else
                {
                    cout<<"4"<<" ";
                }
                
                
                
            }
            cout<<endl;
        }
       
    }
}