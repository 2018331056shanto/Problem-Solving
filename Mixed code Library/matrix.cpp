#include<bits/stdc++.h>
using namespace std; 
int c[10][10];
 int a[10][10];
    int b[10][10];
   
void productMatrix(int a[][10],int b[][10],int r1,int c1,int r2,int c2)
{
    cout<<"hi"<<endl;
}
int main()
{
   
    int r1,c1;
    cin>>r1,c1;
    int r2,c2;
    cin>>r2>>c2;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>b[i][j];
        }
    }
    productMatrix(a,b,r1,c1,r2,c2);
}