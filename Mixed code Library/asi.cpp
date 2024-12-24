#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x[100];//="Attack zerg at dawn";
    cout<<"Your message? ";
    cin.getline(x,100);
//cout<<sizeof(x);int n;
    int n;
    cout<<"Encoding key? ";
    cin>>n;

    for(int i=0; x[i]!='\0'; i++)
    {


        if(int(x[i])>=97&&int(x[i])<=122)
        {
            x[i]=char(int(x[i])-32);//cout<<x[i] <<endl;
            //cout<<x[i]<<endl;
        }      

    } //cout << x[]
    for(int i=0; x[i]!='\0'; i++)
    {
        int l=int(x[i])+n;
        if(int(x[i])<65||int(x[i])>90)
        {
            cout<<x[i];
            
        }
        else
        {
            //cout<<l<<endl;

        if(l>=65&&l<=90)
        {
            //cout<<"h";
            cout<<char(l);
        }
        else if(l>90)
        {
            l=l-90;
            l=l%26;
            l=64+l;
            cout<<char(l);

        }
        else
        {
            if(l<65)
            {
                //cout<<l<<endl;
                l=64-l;
                l=l%26;
                l=90-l;
                cout<<char(l);
            }
        }
        }

    }

    return 0;
}
