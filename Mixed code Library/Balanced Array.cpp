#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,sum1=0,sum2=-1,sum3=0,sum4=0;
        cin>>n;
        int c=n/2;
        if(c%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++)
            {
               sum1+=2;
               sum3+=sum1;
               int e=sum1;
               cout<<e<<" ";
                

            }
            for(int j=1;j<n/2;j++)
            {
               
            sum2+=2;
            sum4+=sum2;
            int f=sum2;
            cout<<f<<" ";
            
            }
            //cout<<sum1<<" "<<sum2<<endl;
            cout<<(sum3-sum4)<<endl;
        }
        
    }
}