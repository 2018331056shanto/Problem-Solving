#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int flag=0;
        int co=0;
        string a,b,c;
        cin>>a>>b>>c;
        for(int j=0;j<a.size();j++)
        {
            if(c[j]==a[j]&&c[j]==b[j])
            {
                swap(c[j],a[j]);
                co++;
            }
            else  if(c[j]==a[j])
            {
                swap(c[j],b[j]);
                co++;
            }
           else // if(c[j]==b[j])
            {
                swap(c[j],a[j]);
                co++;
            }

        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                flag;
            }
            else
                flag=1;
        }
       // cout<<co<<endl;


        if(flag==0&&co==a.size())
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}

