#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,1,-1,1,-1,1,-1};
int main()
{
  int n,m;
int board1[10][10];
  cin>>n>>m;
int board[10][10];
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++)
  {
    cin>>board[i][j];
    board1[i][j]=0;
  }
}


        // int n=board.size();
        // int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cnt=0;
                // int cnt1=0;
                for(int k=0;k<8;k++)
                {
                  
                    if((i+dx[k]>=0&&i+dx[k]<n)&&(j+dy[k]>=0&&j+dy[k]<m))
                    {
                    // {cout<<i<<" "<<j<<" "<<i+dx[k]<<" "<<j+dy[k]<<"  "<<board[i+dx[k]][j+dy[k]]<<" cnt "<<cnt<<endl;
                    
                        if(board[i+dx[k]][j+dy[k]]==1)
                        {
                         
                          ++cnt;
                          
                        }

                    }
                }
                 
                if(board[i][j]==1&&cnt<2)
                {
                    board1[i][j]=0;
                }
                else if(board[i][j]==1&&cnt>=2&&cnt<=3)
                {
                  board1[i][j]=board[i][j];
                    
                }
                else if(board[i][j]==1&&cnt>3)
                {
                    board1[i][j]=0;
                }
                else if(board[i][j]==0&&cnt==3)
                {
                  
                    board1[i][j]=1;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
          
            for(int j=0;j<m;j++)
            {
              
                cout<<board1[i][j]<<" ";
            }
            cout<<endl;
        }
}