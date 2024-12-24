#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,co=0,i=1;
        cin>>n;
        while(true)
        {
            if(n<0||n==0||n==1)
            {

                break;
            }

            int d=(i*i*3)/2+i/2;
            n=n-d;
            i++;
            cout<<d<<" "<<n<<endl;


        }
    }
}
