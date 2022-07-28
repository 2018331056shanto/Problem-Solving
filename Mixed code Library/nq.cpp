#include<iostream>
using namespace std;
int board[20][20];
bool safe(int row, int col,int N) 
{ 
    int i, j; 
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
bool Nqueen(int col,int N) 
{ 
    if (col >= N) 
        return true; 
    for (int i = 0; i < N; i++) { 
        if (safe(i, col,N)) { 
            board[i][col] = 1; 
            if (Nqueen(col + 1,N)) 
                return true; 
            board[i][col] = 0; 
        } 
    } 
    return false; 
} 
bool solve(int N) 
{ 
    
  
    if (Nqueen(0,N) == false) { 
        printf("Solution does not exist"); 
        return false; 
    } 
  
    
    return true; 
} 
int main() 
{ 
  int N;
  cin>>N;
  if(N>10)
    return 0;
    if(solve(N))
    {
        int ar[100]={0};
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            if(board[i][j]==1)
            {
              ar[i]=j;
            } 
      
    }

    for(int i=N-1;i>=0;i--)
    {
      cout<<ar[i]<<" ";
    }
    return 0; 
    } 
    
}