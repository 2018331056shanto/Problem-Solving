#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        long long int    sum=0,ptwo=1,psum=0;
        cin>>n;
        sum=(n*(n+1))/2;
       // cout<<sum<<endl;
        int j=0;
        while(true)
        {  
            ptwo=pow(2,j);
             if(ptwo>n)
            {
                break;
            }
           
            //cout<<ptwo<<endl;
            psum+=pow(2,j);
           // cout<<psum<<endl;
           
            j++;   
        }
       //cout<<j<<endl;
       j--;
       psum=psum+(pow(2,j)+(pow(2,j)-1));
       cout<<sum-psum<<endl;

       
        
    }
    
}