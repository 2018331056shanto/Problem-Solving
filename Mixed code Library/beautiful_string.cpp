#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string a;
    for(int i=0;i<t;i++)
    {

        cin>>a;
            for(int k=0;k<a.size();k++)
            {

                if(a[k]=='?')
                {
                    if(a[k-1]!='a'&&a[k+1]!='a')
                    {
                        a[k]='a';
                    }
                    if(a[k-1]!='b'&&a[k+1]!='b')
                    {
                        a[k]='b';
                    }
                    if(a[k-1]!='c'&&a[k+1]!='c')
                    {
                        a[k]='c';
                    }

                }

            }
            int ok=0;
            for(int k=0;k<a.size()-1;k++)
            {
                if(a[k]==a[k+1])
                {
                    ok=1;
                    break;
                }
            }
            if(ok)
                cout<<"-1"<<endl;
            else cout<<a<<endl;


        }


}
