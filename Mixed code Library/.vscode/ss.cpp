#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int flag=0,flag1=0;
        int a,b,c,d,x,y,x1,y1,x2,y2,f,e;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
       f=x-a+b;
       e=y-c+d;
        if (f>=x1&&f<=x2&&e>=y1&&e<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0))
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
 
 
        }
}