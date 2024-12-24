#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
       long  int a[500000];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            a[c]++;
            
        }
        sort(a,a+n+1);
        /*for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        */
        
        
       int s=a[n];
       int dif=0;
       for(int i=1;i<=n;i++)
       {
           if(a[i]>0)
           {
               dif++;
           }
       }
     //  cout<<dif<<endl;
      // cout<<s<<endl;
       
       //cout<<dif<<endl;
       if(n==1)
       {
           cout<<"0"<<endl;
       }
       else if(dif==n&&n>1)
       {
           cout<<"1"<<endl;
       }
       else
       {
           if(dif>s)
           {
               cout<<s<<endl;

           }
           else if(dif==s)
           {
               cout<<s-1<<endl;
           }
           else
           {
               cout<<dif<<endl;
           }
           
       }       

    }
    
}