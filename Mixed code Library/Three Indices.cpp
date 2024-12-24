#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,flag=0,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);

        }
       for(int i=1;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(a[j]<a[i])
               {
                   cout<<i<<endl;
                   flag=j;
                   cout<<j<<" "<<endl;
                   flag1=1;
                   flag4=i;
                   break;
               }
           }
           for(int k=flag4-1;k>=0;k--)
           {
               if(a[k]<a[flag4])
               {
                   cout<<flag4<<endl;
                   flag2=k;
                   cout<<k<<" "<<endl;
                   flag3=1;
                   break;
               }
           }
           if(flag1==1&&flag3==1)
           {
               break;
           }

       }
       if(flag1==0&&flag3==0)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
           cout<<flag2<<" "<<flag<<endl;
       }
       

        
    }
}