#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int p,f,cnts,cntw,s,w;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        long long int total=p+f;
        //cout<<total<<endl;
        long long mn=min(s,w);
        //cout<<mn<<endl;
        long int d=total/mn;
        long int cnt=0;
        int flag=0;
        if(mn==s)
        {
            cnt+=min(cnts,d);
            flag=1;

        }
        else
        {
            cnt+=min(cntw,d);
        }
        //cout<<cnt<<endl;
        long int sum=total-(cnt*mn);
        //cout<<sum<<endl;
        if(flag)
        {
            long int c=sum/w;
            if(c>0)
            {
                  cnt+=min(cntw,c);
            }
          
        }
        else
        {
            long int f=sum/s;
            if(f>0)
            {
                 cnt+=min(cnts,f);
            }
           
        }
        cout<<cnt<<endl;
        
    
    
    }

}