#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        char a[102][102];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0&&j==c-1)
                {
                    a[i][j]='W';
                }
                else
                {
                    a[i][j]='B';
                }
                
            }
        }
        for(int k=0;k<r;k++)
        {
            for(int l=0;l<c;l++)
            {
                cout<<a[k][l];
            }
            cout<<"\n";
        }
    }
}