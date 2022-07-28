#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c,e,flag=2;
        long long  int d;
        cin>>n>>k;

        d=(n*(n-1))/2;
        e=n;
        e=e-1;
        while(k<=d)
        {
            //cout<<n<<endl;
            c=(e*(e-1))/2;
            if(k<=c)
            {
                //flag++;
                e=e-1;
            }
            else
                break;

        }
       // cout<<c<<endl;
        //cout<<d<<endl;
       // cout<<flag<<endl;
        //ber korte hobe range er moddhe thakle koto number position e 1st b thakbe aita
        long long int g=1;
        while(1)
        {
            if((g*(g+1)/2)<=c)
            {
                flag++;
                g++;
            }
            else
                break;
        }
        //cout<<flag<<endl;
       // int f=abs(k-flag);
       // cout<<f<<endl;
        int m=(n+1)-flag;


            //cout<<m<<endl;
           // cout<<c<<endl;
            int f=(n+1)-(k-c);
           // cout<<f<<endl;
           for(int i=1;i<m;i++)
           {
               cout<<"a";
           }
           for(int j=m;j<=m;j++)
           {
               cout<<"b";
           }
           for(int s=m+1;s<f;s++)
           {
               cout<<"a";
           }
           for(int l=f;l<=f;l++)
           {
               cout<<"b";
           }
           for(int q=f+1;q<=n;q++ )
           {
               cout<<"a";
           }
           cout<<"\n";







    }
}
