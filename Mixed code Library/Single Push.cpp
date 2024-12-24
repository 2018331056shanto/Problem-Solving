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
        set<int>s;
        vector<int>v;
        int flag=0;
        int a[100000],b[100000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int k=0;k<n;k++)
        {

        if(a[k]>b[k])
        {
            flag=1;
        }
        else
        {
            int d=b[k]-a[k];
            v.push_back(d);
            s.insert(d);

        }
        }
        int flag1=0;
        int flag2=1;
        if(s.size()<=2)
        {
            flag1=1;
        }
        if(flag1)
        {
             int idxl=0;
             int idxk=0,idxr=0;
            for(int i=0;i<v.size();i++)
            {
               
                if(v[i]!=0)
                {
                   
                   idxl=i;
                }
                for(int j=idxl+1;j<v.size();j++)
                {
                    if(v[j]==0)
                    {
                       idxk=j;
                    }
                    if(v[j]!=0)
                    {
                        idxr=j;
                        break;
                    }
                }
                break;

            }
            if(idxk>idxl&&idxk<idxr)
            {
                flag2=0;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else if(flag1&&flag2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}