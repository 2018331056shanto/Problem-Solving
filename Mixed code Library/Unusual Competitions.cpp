#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int count1=0,count2=0,count3=0;
    cin>>n;
    char a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
   for(int j=0;j<n;j++)
    {
        if(a[j]=='('&&a[j+1]==')')
        {
            count1++;
        }
        if(a[j]=='(')
            {
                count2++;
            }
            else
                count3++;
                //cout<<count2<<endl<<count3<<endl;


    }
    if(count2!=count3)
        cout<<"-1"<<endl;
    else
    {
        cout<<(count3-count1)*2<<endl;
    }
}
