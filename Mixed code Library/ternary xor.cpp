#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[100000];
        int b[100000];
        int flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {   if(s[i]=='2'&&s[i-1]=='1')
            {
                a[i]=0;
                b[i]=2;
                flag=1;
            }
            else  if(s[i]=='2')
            {
                a[i]=1;
                b[i]=1;

            }




          else if(s[i]=='1'&&flag==1)
            {
                a[i]=0;
                b[i]=1;



            }
             else if(s[i]=='1'&&s[i-1]=='2'&&s[i+1]=='1')
            {
                a[i]=0;
                b[i]=1;
            }
            else if(s[i]=='1')
            {
                a[i]=1;
                b[i]=0;

            }

            else
                {
                    a[i]=0;
                    b[i]=0;

                }


        }
        for(int j=0;j<n;j++)
        {
            cout<<a[j];
        }
        cout<<"\n";
        for(int k=0;k<n;k++)
        {
            cout<<b[k];
        }
        cout<<"\n";

    }
}
