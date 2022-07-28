#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b,a[10000];
    int i=1;
    int n=0;
    while(cin>>b!=EOF)
    {
        a[i++]=b;
        n++l
    }
    int ocr=0;
    int totalpair=0;
    for(int i=1;i<=n-3;i++)
    {
        if(a[i]=='b'&&a[i+1]=='e'&&a[i+2]=='a'&&a[i+3]=='r')
        {
            totalpair+=(i-ocr)*(n-(i+2));
            ocr=i;
            continue;


        }
    }
    cout<<totalpair<<endl;
}