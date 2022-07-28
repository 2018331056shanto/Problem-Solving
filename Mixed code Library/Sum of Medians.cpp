#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        int cnt0=0,cnt1=0;
        string s;
        cin>>s;
     
for(int i=0;i<n;i++)
{
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
            
        }
         
          cout<<min((cnt1*c1+cnt0*c0),min((n*c1)+(cnt0*h),(c0*n)+(cnt1*h)))<<endl;
    