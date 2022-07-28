#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[60000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sim=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                sim++;
            }
        }
        if(sim==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<n;i++)
            {
                if(a[0]!=a[i])
                {
                    cout<<"1"<<" "<<i+1<<endl;

                }
                else
                {
                    for(int j=1;j<n;j++)
                    {
                        if(a[i]!=a[j])
                        {
                            cout<<j+1<<" "<<i+1<<endl;
                            break;
                        }
                    }
                }

            }
        }
        
    }
    
}