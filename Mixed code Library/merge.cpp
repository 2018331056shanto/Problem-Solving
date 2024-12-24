#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int r,int s)
{

    int c[100000];
    int na=1;
    int nb=1;
    int ptr=1;
    while(na<=r&&nb<=s)
    {
        if(a[na]<b[nb])
            {

                c[ptr]=a[na];
                ptr=ptr+1;
                na=na+1;
            }
            else
            {
                c[ptr]=b[nb];
                ptr=ptr+1;
                nb=nb+1;
            }
            if(na>r)
            {

                for(int k=0;k<=(s-nb);k++)
                {
                    c[ptr+k]=b[nb+k];
                }
            }
                else
                {


                for(int k=0;k<=(r-na);k++)
                {
                    c[ptr+k]=a[na+k];
                }

            }


    }
    for(int l=1;l<=(s+r);l++)
    {

        cout<<c[l]<<" ";
    }
}
int main()
{

    int a[100],b[1000];
    int r,s,i,j,k;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        cin>>a[i];
    }
    cin>>s;
    for(j=1;j<=s;j++)
    {

        cin>>b[j];
    }
    merge(a,b,r,s);

}
