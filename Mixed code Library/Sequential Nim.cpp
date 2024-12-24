#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,idx=0;
        cin>>n;
       long long int a[100000];
        for(int i=1;i<=n;i++)
        {
          long long int c;
          cin>>c;
          a[i]=c;
          
          if(c==1)
          {
              one++;
          }
        }
       
        for(int i=1;i<=n;i++)
        {
           if(a[i]>1)
           {
               idx=i;
               break;
           }
           
            
        }
       // cout<<idx<<endl;
        
        
        if(n%2==0&&one==n)
        {
            cout<<"Second"<<endl;
        }
        else if(n%2&&one==n)
        {
            cout<<"First"<<endl;

        }
       
        else
        {
            if(idx%2==1)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
            
        }

        

    }
}