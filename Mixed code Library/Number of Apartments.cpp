#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int flag=0,flag1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i*3+j*5+k*7==n)
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        flag=1;
                        flag1=1;
                        break;

                        
                    }
                    if(i*3+j*5+k*7>n)
                    {
                        flag1=1;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
               
            }
            if(flag)
            {
                break;
            }
            
        }
            
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        
    }
}