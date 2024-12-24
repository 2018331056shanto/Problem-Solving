#include<iostream>
using namespace std;
int main()
{
    int k=1;
    int n,i;
    int loc=1;
    int data[100];
    cin>>n;
    for(i=0;i<k;i++)
    {
        cin>>data[i];
    }
    i=0;
    while(data[i]=='\0')
    {
        if(data[i]>k)
            k=data[i];
        i++;

    }
    cout<<k;
    return 0;




}
