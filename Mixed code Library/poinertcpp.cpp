#include<iostream>
using namespace std;
int main()
{

    int x=10;
    int *p;
    p=&x;
    cout<<("value of x :%d",x)<<endl;
    *p=20;
    cout<<("value of x:%d",x)<<endl;
    cout<<("value of x:%p",&x)<<endl;
    cout<<("address of p:%p",p)<<endl;

    return 0;
}
