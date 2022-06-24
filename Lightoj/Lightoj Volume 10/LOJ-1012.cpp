#include<bits/stdc++.h>
using namespace std;
std::vector<char> v[45];
int vis[45][45];
int r,cl;
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};
struct  P
{
    int x,y;
    void pin(int r,int c)
    {
        x=r;
        y=c;

    }
    
};
bool vaild(P pos)
{   // cout<<pos.x<<" "<<pos.y<<" "<<v[pos.x][pos.y]<<" "<<vis[pos.x][pos.y]<<endl;
    if(pos.x>=0&&pos.x<r&&pos.y>=0&&pos.y<cl&&(v[pos.x][pos.y]=='.'||v[pos.x][pos.y]=='@')&&vis[pos.x][pos.y]==0)
    {
        //cout<<pos.x+1<<" "<<pos.y+1<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
int  bfs(P start)
{
    //cout<<start.x<<" "<<start.y<<endl;
    int cnt=1;
    queue<P>q;
    q.push(start);
    vis[start.x][start.y]=1;
    while(!q.empty())
    {
        P f=q.front();
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            //cout<<"hello"<<endl;
            P pos;
            pos.x=f.x+dr[i];
            pos.y=f.y+dc[i];
            if(vaild(pos))
            {
                //cout<<"hello"<<endl;
                //cout<<pos.x<<" "<<pos.y<<endl;
                q.push(pos);
                vis[pos.x][pos.y]=1;
                cnt++;
            }
        }
    }
    //cout<<cnt<<endl;

return cnt;
}
void init()
{
    for(int i=0;i<45;i++)
    {
        v[i].clear();
        for(int j=0;j<45;j++)
        {
           //// khanki eida ki korsos vis[40][40]=0;
           vis[i][j]=0;
        }
    }
    
}
int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++)
    {
        init();
        cin>>cl>>r;
        
        P pass;
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<cl;k++)
            {
                char c;
                cin>>c;
                v[j].push_back(c);
                if(c=='@')
                {
                    //cout<<" position"<<j<<" "<<k<<endl;
                    pass.pin(j,k);
                }

            }
        }

        
        int cnt =bfs(pass);
        cout<<"Case "<<i+1<<": "<<cnt<<endl;

    }
    
}