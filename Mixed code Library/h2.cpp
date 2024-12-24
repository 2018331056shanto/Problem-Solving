
#include<bits/stdc++.h>
using namespace std;
int dx[]={1, 1, 1, 0, 0, -1, -1, -1};
int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(1)
    {
        int row,col;
        cin>>row>>col;
        if(row==0&&col==0)
            break;
        char ch[101][101];
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                ch[i][j]=0;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>ch[i][j];
            }
        }
        bool flag=false;
        int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(ch[i][j]=='*')
                {
                    flag=true;
                    for(int k=0;k<8;k++)
                    {
                        if(ch[i+dx[k]][j+dy[k]]=='*')
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                    {
                        ans++;
                    }


                }
            }
        }
        cout<<ans<<endl;

    }
}    