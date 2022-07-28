#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a[100000];
        
        long long int n,c,o,i=0,j=0,k=0;
        int flag=0;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        long long int l=n;
       sort(a,a+n);  
       if(l%2==0)
       {
            j=(n/2)-1;
           while(j>=0)
       {
           cout<<a[j]<<" ";
           
          
               for(k=n/2;k<n;k++)
           {
               cout<<a[k]<<" ";
               
               break;
           }
        
           n=n+2;
           j--;
       }
       }
       else
       {
           j=(l/2);
           while(j>=0)
       {
           cout<<a[j]<<" ";
           flag++;
           if(flag<l)
           {

           for(k=(n/2)+1;k<n;k++)
           {
               cout<<a[k]<<" ";
               flag++;
               break;
           }
           
           }
           
           
           n=n+2;
           j--;
       }
       }
       
     //cout<<flag<<endl;
       
      
       cout<<"\n";
             

       


       
        

    }
}