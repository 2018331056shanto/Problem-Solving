#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a[1000],count1=0,count2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]=='+')
            count1++;
        else
            count2++;
    }
    cout<<count1<<endl<<count2<<endl;
}
