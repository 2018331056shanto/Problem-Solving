/*#include<iostream>
using namespace std;
struct construct
{ int a,b;
    construct()
    {

        a=1000;
        b=46434;
    }

};
int main()
{

    construct s;
    cout<<"value"<<s.a<<endl;
    cout<<"value 2"<<s.a<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
struct construct
{

    int a,b,c,x,y;
    construct()
    {
        a=35;
        b=532;
        c=3532;
    }
    construct(int x1,int y1)
    {
        x=x1;
        y=y1;


    }
    int getx()
    {
        return x;
    }
    int gety()
    {

        return y;
    }
};
int main()
{

    construct s;
    construct p(33,444);
    cout<<s.a<<endl<<s.b<<endl<<s.c<<endl;
    cout<<p.getx()<<endl<<p.gety()<<endl;
    return 0;
}
