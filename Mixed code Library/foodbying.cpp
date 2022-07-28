#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long int sum=0;
        while(n/10)
        {
            sum=sum+(n-n%10);
            n=n/10+n%10;


        }
        cout<<sum+n%10<<endl;

    }
    return 0;
}
