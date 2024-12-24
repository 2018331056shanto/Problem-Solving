#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int sum1=0,sum2=0;
        cin>>n;
        if(n==2)
        {
            cout<<"2"<<endl;
        }
        else
        {
              for(int i=1;i<n/2;i++)
        {
           sum1+=pow(2,i);
        }
        for(int  j=n/2;j<n;j++)
        {
            sum2+=pow(2,j);
        }
        sum1+=pow(2,n);
        cout<<abs(sum1-sum2)<<endl;
        }
        
      
    }
    

    
    
}