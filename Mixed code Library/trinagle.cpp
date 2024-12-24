#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c)
       {
           if(a==b&&b==c&&c==a)
        {

            cout<<"Equilateral Triangle"<<endl;
        }

        else if((a==b))
        {
            cout<<"Isosceles Triangle"<<endl;
        }
        else if(b==c)
           {
               cout<<"Isosceles Triangle"<<endl;
           }
           else if(c==a)
            {
                cout<<"Isosceles Triangle"<<endl;
            }
            else
            {
                cout<<"Bad Triangle"<<endl;
            }


       }

         else if((a+c)>b)
       {
               if(a==b&&b==c&&c==a)
        {

            cout<<"Equilateral Triangle"<<endl;
        }

        else if((a==b))
        {
            cout<<"Isosceles Triangle"<<endl;
        }
        else if((b==c))
           {
               cout<<"Isosceles Triangle"<<endl;
           }
           else if(c==a)
            {
                cout<<"Isosceles Triangle"<<endl;
            }
            else
            {
                cout<<"Bad Triangle"<<endl;
            }

       }

       else if((b+c)>a)
       {
               if(a==b&&b==c&&c==a)
        {

            cout<<"Equilateral Triangle"<<endl;
        }

        else if((a==b))
        {
            cout<<"Isosceles Triangle"<<endl;
        }
        else if((b==c))
           {
               cout<<"Isosceles Triangle"<<endl;
           }
           else if(c==a)
            {
                cout<<"Isosceles Triangle"<<endl;
            }
            else
            {
                cout<<"Bad Triangle"<<endl;
            }

       }
       else
       {
           return 0;
       }



        return 0;
}
