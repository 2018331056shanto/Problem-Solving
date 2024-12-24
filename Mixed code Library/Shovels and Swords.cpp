#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
         if(a==0||b==0)
         {
             cout<<"0"<<endl;
         }
       
         
         else
         {

             if(a<b)
             
                 swap(a,b);
                 if(a<=b*2)
                 {
                     cout<<(a+b)/3<<endl;
                 }
                else
                {
                    cout<<b<<endl;
                }
                
                 
             
                 
         }

    }
}
    