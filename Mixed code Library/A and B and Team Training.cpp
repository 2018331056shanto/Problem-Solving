#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int flag=0;
    cin>>n>>m;
    while(n>0&&m>0)
    {
        if(n==1&&m==1)
            break;





    else  if(m>=n)
    {
       n=n-1;
       m=m-2;
       flag++;

    }
     else
    {
        n=n-2;
        m=m-1;
        flag++;
    }



    }

    cout<<flag<<endl;
}


