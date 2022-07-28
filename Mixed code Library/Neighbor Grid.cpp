#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a[10000];
        long long int n,m,flag=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                long int c;
                cin>>c;
                if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1))
                {
                    if(c>2)
                    {
                        flag=1;
                    }
                   else
                   {
                       a[i].push_back(2);
                   }
                   
                }
                else if(i==0&&(j>0&&j<m-1)||(j==0&&(i>0&&i<n-1))||(i==n-1&&(j>0&&j<m-1))||(j==m-1&&(i>0&&i<n-1)))
                {
                    if(c>3)
                    {
                        flag=1;
                    }
                    else
                    {
                        a[i].push_back(3);
                    }
                    
                }
                else
                {
                    a[i].push_back(4);
                }
                                
            }
        
        }
       
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        

    }

}