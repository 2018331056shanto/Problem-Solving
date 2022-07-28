#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int year=0;
    cin>>a>>b;
while(1)
{
    a=a*3;
    b=b*2;
    year++;
    if(a>b)
        break;
}
cout<<year<<endl;
    return 0;
}
