#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum=0;
        int cnt=0;
        int idx=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
            cnt++;
            idx=i;
            if(sum>n)
            {
                
                break;
            }


        }
        if(sum==n)
        {
            cout<<cnt<<endl;
        }
        else if(sum-idx==n)
        {
            cout<<cnt-1<<endl;
        }
        else
        {
            cout<<cnt+(sum-n)<<endl;
        }
        

       

    }
}